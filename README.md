# 👻 Ghost iOS Benchmark Dashboard

This is the official testing laboratory for **Ghost Serialization** in native iOS environments. It serves as both a performance validation tool and a blueprint for production-grade Ghost integrations on iOS.

**Ghost version:** `1.1.16` from [Maven Central](https://central.sonatype.com/search?q=g:com.ghostserializer).

> **This repo is self-contained.** Clone it, open in Xcode, press ▶️ — no Kotlin, Gradle, or network setup required. The pre-compiled `GhostBenchmarkShared.xcframework` (built with Ghost `1.1.16`) is bundled in the repository.

**Related projects:**

| Project | Description |
|:---|:---|
| [ghost-serializer](https://github.com/juanchurtado1991/ghost-serializer) | Main library, KMP sample app, JVM benchmarks |
| [ghost-android-test-app](https://github.com/juanchurtado1991/ghost-android-test-app) | On-device Android benchmark vs Gson, Moshi, KSer |
| [ghost-spring-boot-test-app](https://github.com/juanchurtado1991/ghost-spring-boot-test-app) | Spring Boot benchmark vs Jackson |

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

### Optional: Alamofire competitor

Alamofire is an optional competitor. To enable it:

1. In Xcode: **File → Add Package Dependencies...**
2. Paste: `https://github.com/Alamofire/Alamofire.git` and add it.
3. In your target's **General → Frameworks**, add `Alamofire` (not `AlamofireDynamic`).
4. **Shift + Cmd + K** (Clean Build Folder), then **Cmd + R**.

The `Alamofire + Ghost` and `Alamofire + Codable` rows appear in the **REAL-WORLD (NETWORK)** section.

---

## 📦 Using Ghost in your own iOS project (Maven Central)

Ghost is a Kotlin Multiplatform library. On iOS you define models in a small KMP module, build an **XCFramework**, and call it from Swift.

> **Coordinates:** Maven artifacts use `com.ghostserializer`. Kotlin imports use `com.ghost.serialization` (package namespace).

### Maven Central artifacts (`1.1.16`)

| Artifact | Purpose |
|:---|:---|
| `com.ghostserializer:ghost-api` | Annotations (`@GhostSerialization`, etc.) |
| `com.ghostserializer:ghost-serialization` | Runtime engine |
| `com.ghostserializer:ghost-compiler` | KSP code generator |
| `com.ghostserializer.ghost` (Gradle plugin) | Auto-wires KSP + dependencies |

### Step 1 — KMP module + Ghost plugin (recommended)

```kotlin
// shared-ios/build.gradle.kts
import org.jetbrains.kotlin.gradle.plugin.mpp.apple.XCFramework

plugins {
    kotlin("multiplatform")
    id("com.ghostserializer.ghost") version "1.1.16"
}

ghost {
    version.set("1.1.16")
}

kotlin {
    val xcf = XCFramework("YourModuleName")

    iosArm64 {
        binaries.framework {
            baseName = "YourModuleName"
            xcf.add(this)
            export("com.ghostserializer:ghost-serialization:1.1.16")
            export("com.ghostserializer:ghost-api:1.1.16")
        }
    }

    iosSimulatorArm64 {
        binaries.framework {
            baseName = "YourModuleName"
            xcf.add(this)
            export("com.ghostserializer:ghost-serialization:1.1.16")
            export("com.ghostserializer:ghost-api:1.1.16")
        }
    }

    sourceSets {
        val commonMain by getting {
            kotlin.srcDir("build/generated/ksp/metadata/commonMain/kotlin")
        }
        val iosMain by creating { dependsOn(commonMain) }
        val iosArm64Main by getting { dependsOn(iosMain) }
        val iosSimulatorArm64Main by getting { dependsOn(iosMain) }
    }
}

ksp {
    arg("ghost.moduleName", "your_module")
}
```

`settings.gradle.kts` in your KMP project:

```kotlin
pluginManagement {
    repositories {
        mavenCentral()
        gradlePluginPortal()
    }
}
```

The Ghost plugin adds `ghost-api`, `ghost-serialization`, and `ghost-compiler` automatically. No `mavenLocal()` required.

<details>
<summary>Manual KSP setup (without Gradle plugin)</summary>

```kotlin
val ghostVersion = "1.1.16"

// In commonMain dependencies:
api("com.ghostserializer:ghost-serialization:$ghostVersion")
api("com.ghostserializer:ghost-api:$ghostVersion")

// In dependencies block:
add("kspCommonMainMetadata", "com.ghostserializer:ghost-compiler:$ghostVersion")
```

</details>

### Step 2 — Define your models

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

### Step 3 — Bridge for Swift (manual registry)

Kotlin/Native does **not** support `ServiceLoader`. Register the KSP-generated registry once at startup:

```kotlin
// shared-ios/src/commonMain/kotlin/com/example/GhostBridge.kt
package com.example

import com.example.models.User
import com.ghost.serialization.Ghost
import com.ghost.serialization.generated.GhostModuleRegistry_your_module

object GhostBridge {

    fun prewarm() {
        Ghost.addRegistry(GhostModuleRegistry_your_module.INSTANCE)
        Ghost.prewarm()
    }

    fun deserializeUser(json: String): User = Ghost.deserialize(json)
    fun serializeUser(value: User): String = Ghost.encodeToString(value)
    fun deserializeUserFromBytes(bytes: ByteArray): User = Ghost.deserialize(bytes)
    fun serializeUserToBytes(value: User): ByteArray = Ghost.encodeToBytes(value)
}
```

> **Registry class name:** Generated from `ghost.moduleName`. With `ksp { arg("ghost.moduleName", "my_app") }` → `GhostModuleRegistry_my_app.INSTANCE`.

### Step 4 — Build the XCFramework

```bash
./gradlew :shared-ios:assembleYourModuleNameReleaseXCFramework
```

Output: `shared-ios/build/XCFrameworks/release/YourModuleName.xcframework`.

### Step 5 — Add to Xcode

**Option A — Local Swift Package (recommended):**

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

In Xcode: **File → Add Package Dependencies... → Add Local...**

**Option B — Drag & drop:** Add `.xcframework` → **Embed & Sign**.

### Step 6 — Use in Swift

```swift
import YourModuleName

GhostBridge.shared.prewarm()

let user = GhostBridge.shared.deserializeUser(json: jsonString)

// URLSession: prefer String over raw Data → KotlinByteArray (faster)
let (data, _) = try await URLSession.shared.data(from: url)
let jsonStr = String(data: data, encoding: .utf8)!
let user = GhostBridge.shared.deserializeUser(json: jsonStr)

let json = GhostBridge.shared.serializeUser(value: user)
```

> **Tip:** `Data → String → Ghost.deserialize` is faster than passing raw bytes through the Kotlin/Native bridge.

Full library docs: [ghost-serializer README](https://github.com/juanchurtado1991/ghost-serializer#usage---ios-native--swift).

---

## 📊 Benchmark results — Native iOS (iPhone Simulator, Apple Silicon)

> **Methodology:** 100 measured iterations after a 200-iteration warmup. Payload: Rick & Morty API, 20 pages (~2,000 objects, ~800 KB JSON). Network benchmarks use `MockURLProtocol` (local replay). Ghost memory is GC working set per iteration; Codable shows `ARC ✓` because Swift ARC frees before measurement.

### Parse (deserialization)

| Engine | Mode | Avg latency | Memory |
|:---|:---:|:---:|:---:|
| **Ghost** | String | **1.54 ms** | GC ~413 KB |
| Apple Codable | String | 2.64 ms | ARC ✓ |
| **Ghost** | Bytes | **0.86 ms** | GC ~123 KB |
| Apple Codable | Bytes | 2.53 ms | ARC ✓ |
| **Ghost** | Streaming | **0.92 ms** | GC ~200 KB |
| Apple Codable | Streaming | 2.54 ms | ARC ✓ |

### Serialize (serialization)

| Engine | Mode | Avg latency | Memory |
|:---|:---:|:---:|:---:|
| **Ghost** | String | **1.28 ms** | GC ~587 KB |
| Apple Codable | String | 2.71 ms | 5 KB |
| **Ghost** | Bytes | **0.39 ms** | GC ~228 KB |
| Apple Codable | Bytes | 2.82 ms | ARC ✓ |
| **Ghost** | Streaming | **0.40 ms** | GC ~209 KB |
| Apple Codable | Streaming | 2.91 ms | ARC ✓ |

### Real-world network stack

| Stack | Latency | Memory |
|:---|:---:|:---:|
| **URLSession + Ghost** | **2.27 ms** | GC ~778 KB |
| URLSession + Codable | 2.76 ms | ARC ✓ |
| **Alamofire + Ghost** | **2.45 ms** | GC ~510 KB |
| Alamofire + Codable | 3.03 ms | 1 KB |

### Key takeaways

- Ghost is **~41% faster** than Codable for String parsing (`1.54 ms` vs `2.64 ms`).
- Ghost is **~7× faster** than Codable for Byte serialization (`0.39 ms` vs `2.82 ms`).
- Ghost wins **all 8 benchmarks**, including URLSession and Alamofire stacks.
- `GC ~X KB` is **transient** (Kotlin/Native batch GC). `ARC ✓` means freed before snapshot, not zero allocation.

### Memory: ARC vs GC

| | Swift (Codable) | Ghost (Kotlin/Native) |
|:---|:---|:---|
| **Model** | ARC — instant release | GC — lazy batch collection |
| **Measurement** | Freed before snapshot → ~0 KB | Visible until GC runs → ~X KB |
| **Reality** | Similar per-operation cost; different visibility in benchmarks |

---

## 🏁 iOS vs Android (Ghost)

| Operation | iOS Ghost | [Android Ghost](https://github.com/juanchurtado1991/ghost-android-test-app) | Notes |
|:---|:---:|:---:|:---|
| Parse String | 1.54 ms | 4.70 ms | Apple Silicon vs ART |
| Parse Bytes | 0.86 ms | 4.18 ms | |
| Write Bytes | 0.39 ms | 2.22 ms | |
| Network | 2.27 ms | 5.70 ms | |

Both platforms beat the platform-native serializer in these benchmarks.

---

*Part of the [Ghost Serialization](https://github.com/juanchurtado1991/ghost-serializer) ecosystem.* 👻
