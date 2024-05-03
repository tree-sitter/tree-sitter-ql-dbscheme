import XCTest
import SwiftTreeSitter
import TreeSitterDbscheme

final class TreeSitterTestTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_dbscheme())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Test grammar")
    }
}
