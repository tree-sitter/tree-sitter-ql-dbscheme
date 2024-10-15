import XCTest
import SwiftTreeSitter
import TreeSitterQLDBScheme

final class TreeSitterQLDBSchemeTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_ql_dbscheme())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading QL DBScheme grammar")
    }
}
