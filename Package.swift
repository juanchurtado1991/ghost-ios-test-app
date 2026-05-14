// swift-tools-version: 5.9
import PackageDescription

let package = Package(
    name: "GhostBenchmarkShared",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "GhostBenchmarkShared",
            targets: ["GhostBenchmarkShared"])
    ],
    targets: [
        .binaryTarget(
            name: "GhostBenchmarkShared",
            path: "GhostBenchmarkShared.xcframework")
    ]
)
