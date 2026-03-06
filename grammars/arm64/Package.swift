// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterArm64",
    products: [
        .library(name: "TreeSitterArm64", targets: ["TreeSitterArm64"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterArm64",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterArm64Tests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterArm64",
            ],
            path: "bindings/swift/TreeSitterArm64Tests"
        )
    ],
    cLanguageStandard: .c11
)
