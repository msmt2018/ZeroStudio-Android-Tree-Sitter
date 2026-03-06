import XCTest
import SwiftTreeSitter
import TreeSitterArm

final class TreeSitterArmTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_arm())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Arm grammar")
    }
}
