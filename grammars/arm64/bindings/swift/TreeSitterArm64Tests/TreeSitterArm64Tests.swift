import XCTest
import SwiftTreeSitter
import TreeSitterArm64

final class TreeSitterArm64Tests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_arm64())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Arm64 grammar")
    }
}
