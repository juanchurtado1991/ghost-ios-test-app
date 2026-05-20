# 👻 Ghost iOS Benchmark Dashboard

This is the official testing laboratory for **Ghost Serialization** in native iOS environments. This application serves as both a performance validation tool and a blueprint for production-grade Ghost integrations on iOS.

> **This repo is self-contained.** Clone it, open in Xcode, press ▶️ — no Kotlin, Gradle, or external dependencies required. The pre-compiled XCFramework is bundled.

---

## 🚀 How to Run the Benchmark

1. Clone this repository.
2. Open `ghost-ios-test-app.xcodeproj` in Xcode.
3. Select a physical iPhone or Simulator target.
4. Press **Cmd + R** to build and run.
5. Adjust the **Stress Load** slider (1–20 pages).
6. Press **RUN STRESS COMPARISON**.
7. Wait for the warmup and benchmark phases to complete (~30–60 seconds at 20 pages).
8. Results appear in the **Performance Insight** card.

### Optional: Alamofire Competitor

Alamofire is included as an optional competitor. To enable it:

1. In Xcode: **File → Add Package Dependencies...**
2. Paste: `https://github.com/Alamofire/Alamofire.git` and add it.
3. In your target's **General → Frameworks**, ensure you add `Alamofire` (not `AlamofireDynamic`).
4. **Shift + Cmd + K** (Clean Build Folder), then **Cmd + R**.

The `Alamofire + Ghost` and `Alamofire + Codable` rows will automatically appear in the **REAL-WORLD (NETWORK)** section.

---

## 🛠️ How to Use Ghost in Your Own iOS Project

Ghost is a Kotlin Multiplatform library published on **Maven Central**. To use it on iOS, you create a small KMP module that defines your models, and Ghost generates a pre-compiled XCFramework that Swift consumes as a regular Apple framework.

### Step 1 — Create a KMP Module

Create a new Kotlin Multiplatform module (e.g., `shared-ios`) in your project. If you already have a KMP shared module, you can use that.

```kotlin
// shared-ios/build.gradle.kts
import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    kotlin("multiplatform")
    id("com.google.devtools.ksp")    // Required for Ghost's code generation
    id("co.touchlab.skie") version "0.9.5" // Optional: exports Kotlin types as native Swift types
}

val ghostVersion = "1.1.16"

kotlin {
    val xcf = XCFramework("YourModuleName")

    iosArm64 {
        binaries.framework {
            baseName = "YourModuleName"
            xcf.add(this)
            export("com.ghost.serialization:ghost-serialization:$ghostVersion")
            export("com.ghost.serialization:ghost-api:$ghostVersion")
        }
    }

    iosSimulatorArm64 {
        binaries.framework {
            baseName = "YourModuleName"
            xcf.add(this)
            export("com.ghost.serialization:ghost-serialization:$ghostVersion")
            export("com.ghost.serialization:ghost-api:$ghostVersion")
        }
    }

    sourceSets {
        val commonMain by getting {
            // KSP generates serializers into this directory
            kotlin.srcDir("build/generated/ksp/metadata/commonMain/kotlin")
            dependencies {
                api("com.ghost.serialization:ghost-serialization:$ghostVersion")
                api("com.ghost.serialization:ghost-api:$ghostVersion")
            }
        }

        val iosMain by creating { dependsOn(commonMain) }
        val iosArm64Main by getting { dependsOn(iosMain) }
        val iosSimulatorArm64Main by getting { dependsOn(iosMain) }
    }
}

// Tell Ghost the module name (used for the generated registry class)
ksp { arg("ghost.moduleName", "your_module") }

dependencies {
    add("kspCommonMainMetadata", "com.ghost.serialization:ghost-compiler:$ghostVersion")
}

// Ensure KSP metadata runs before compilation
tasks.configureEach {
    if ((name.startsWith("compile") || name.startsWith("ksp")) && name != "kspCommonMainKotlinMetadata") {
        dependsOn(tasks.matching { it.name == "kspCommonMainKotlinMetadata" })
    }
}
```

### Step 2 — Define Your Models

Annotate your data classes with `@GhostSerialization` in `commonMain`. Ghost's KSP processor will generate optimized, zero-reflection serializers at compile time.

```kotlin
// shared-ios/src/commonMain/kotlin/com/example/models/User.kt
package com.example.models

import com.ghost.serialization.annotations.GhostSerialization

@GhostSerialization
data class User(
    val id: Int,
    val name: String,
    val email: String,
    val roles: List<String> = emptyList(),
    val address: Address? = null
)

@GhostSerialization
data class Address(
    val street: String,
    val city: String,
    val country: String
)
```

### Step 3 — Create a Bridge for Swift

Kotlin/Native does **not** support `ServiceLoader` (used for automatic registry discovery on JVM/Android). You must register the KSP-generated module registry once and expose typed methods for Swift:

```kotlin
// shared-ios/src/commonMain/kotlin/com/example/GhostBridge.kt
package com.example

import com.example.models.User
import com.ghost.serialization.Ghost
import com.ghost.serialization.generated.GhostModuleRegistry_your_module

object GhostBridge {

    fun prewarm() {
        // Mandatory on iOS: register the KSP-generated registry manually
        try {
            Ghost.addRegistry(GhostModuleRegistry_your_module())
        } catch (_: Exception) { }
        Ghost.prewarm()
    }

    fun deserializeUser(json: String): User = Ghost.deserialize(json)
    fun serializeUser(value: User): String = Ghost.encodeToString(value)
    fun deserializeUserFromBytes(bytes: ByteArray): User = Ghost.deserialize(bytes)
    fun serializeUserToBytes(value: User): ByteArray = Ghost.encodeToBytes(value)
}
```

> **Why `GhostModuleRegistry_your_module`?**  
> The class name is generated from the `ghost.moduleName` KSP argument you set in Step 1. If you used `ksp { arg("ghost.moduleName", "my_app") }`, the class will be `GhostModuleRegistry_my_app`.

### Step 4 — Build the XCFramework

```bash
./gradlew :shared-ios:assembleYourModuleNameReleaseXCFramework
```

The output will be in `shared-ios/build/XCFrameworks/release/YourModuleName.xcframework`.

### Step 5 — Add to Xcode

You have two options:

**Option A — Local Swift Package (recommended):**
1. Create a `Package.swift` next to the XCFramework:
   ```swift
   // swift-tools-version: 5.9
   import PackageDescription

   let package = Package(
       name: "YourModuleName",
       platforms: [.iOS(.v15)],
       products: [
           .library(name: "YourModuleName", targets: ["YourModuleName"])
       ],
       targets: [
           .binaryTarget(name: "YourModuleName", path: "YourModuleName.xcframework")
       ]
   )
   ```
2. In Xcode: **File → Add Package Dependencies... → Add Local...** → select the directory containing `Package.swift`.

**Option B — Drag & Drop:**
1. Drag the `.xcframework` folder into your Xcode project.
2. Set it to **Embed & Sign** in your target's **General → Frameworks**.

### Step 6 — Use in Swift

```swift
import YourModuleName

// Call prewarm once at app startup (e.g., in AppDelegate or @main)
GhostBridge.shared.prewarm()

// Deserialize from JSON String
let user = GhostBridge.shared.deserializeUser(json: jsonString)

// Deserialize from URLSession response
let (data, _) = try await URLSession.shared.data(from: url)
let jsonStr = String(data: data, encoding: .utf8)!
let user = GhostBridge.shared.deserializeUser(json: jsonStr)

// Serialize back to String
let json = GhostBridge.shared.serializeUser(value: user)
```

> **Tip:** Always pass `String` to Ghost instead of raw bytes. The `Data → KotlinByteArray` conversion in Swift copies byte-by-byte and is slower than `Data → String → Ghost.deserialize(string)`.

---

## 📊 Benchmark Results — Native iOS (iPhone Simulator, Apple Silicon)

> **Methodology:** 100 measured iterations after a 200-iteration warmup. Payload: Rick & Morty API, 20 pages (~2,000 objects, ~800KB JSON). Network benchmarks use `MockURLProtocol` for local data replay — no network variability. Memory for Ghost is the average GC working set per iteration (Kotlin/Native GC, lazy collection). Memory for Codable shows `ARC ✓` because Swift ARC frees allocations instantly, before measurement.

### Parse (Deserialization)

| Engine | Mode | Avg Latency | Memory |
|:---|:---:|:---:|:---:|
| **Ghost** | String | **1.54 ms** | GC ~413 KB |
| Apple Codable | String | 2.64 ms | ARC ✓ |
| **Ghost** | Bytes | **0.86 ms** | GC ~123 KB |
| Apple Codable | Bytes | 2.53 ms | ARC ✓ |
| **Ghost** | Streaming | **0.92 ms** | GC ~200 KB |
| Apple Codable | Streaming | 2.54 ms | ARC ✓ |

### Serialize (Serialization)

| Engine | Mode | Avg Latency | Memory |
|:---|:---:|:---:|:---:|
| **Ghost** | String | **1.28 ms** | GC ~587 KB |
| Apple Codable | String | 2.71 ms | 5 KB |
| **Ghost** | Bytes | **0.39 ms** | GC ~228 KB |
| Apple Codable | Bytes | 2.82 ms | ARC ✓ |
| **Ghost** | Streaming | **0.40 ms** | GC ~209 KB |
| Apple Codable | Streaming | 2.91 ms | ARC ✓ |

### Real-World Network Stack

| Stack | Latency | Memory |
|:---|:---:|:---:|
| **URLSession + Ghost** | **2.27 ms** | GC ~778 KB |
| URLSession + Codable | 2.76 ms | ARC ✓ |
| **Alamofire + Ghost** | **2.45 ms** | GC ~510 KB |
| Alamofire + Codable | 3.03 ms | 1 KB |

### Key Takeaways

- Ghost is **~41% faster** than Apple Codable for String parsing (`1.54ms` vs `2.64ms`).
- Ghost is **~7× faster** than Apple Codable for Byte serialization (`0.39ms` vs `2.82ms`).
- Ghost wins **all 8 benchmarks**, including real-world network stacks with both URLSession and Alamofire.
- The GC working set (`GC ~X KB`) is **transient** — Kotlin/Native's GC reclaims it shortly after. Codable's `ARC ✓` means memory was freed before measurement, not that zero memory was used.

### Memory: ARC vs. GC

| | Swift (Apple Codable) | Ghost (Kotlin/Native) |
|:---|:---|:---|
| **Model** | ARC — instant release | GC — lazy batch collection |
| **Measurement** | Freed before snapshot → ~0 KB | Visible until GC runs → ~X KB |
| **Reality** | Both use similar memory per operation. ARC frees immediately; GC collects in batches. |

---

## 🏁 iOS vs. Android Comparison

| Operation | iOS Ghost | Android Ghost | Advantage |
|:---|:---:|:---:|:---:|
| Parse String | 1.54 ms | 4.70 ms | iOS faster |
| Parse Bytes | 0.86 ms | 4.18 ms | iOS faster |
| Write Bytes | 0.39 ms | 2.22 ms | iOS faster |
| Network | 2.27 ms | 5.70 ms | iOS faster |

> iOS runs on Apple Silicon (ARM64), which has different characteristics than Android's ART runtime. Both platforms show Ghost winning vs. the platform-native serializer.

---

*Developed with ❤️ by the Ghost Serialization team.* 👻
