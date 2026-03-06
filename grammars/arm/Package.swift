// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterArm",
    products: [
        .library(name: "TreeSitterArm", targets: ["TreeSitterArm"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterArm",
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
            name: "TreeSitterArmTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterArm",
            ],
            path: "bindings/swift/TreeSitterArmTests"
        )
    ],
    cLanguageStandard: .c11
)
