// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterQLDBScheme",
    products: [
        .library(name: "TreeSitterQLDBScheme", targets: ["TreeSitterQLDBScheme"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterQLDBScheme",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterQLDBSchemeTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterQLDBScheme",
            ],
            path: "bindings/swift/TreeSitterQLDBSchemeTests"
        )
    ],
    cLanguageStandard: .c11
)
