import XCTest
import SwiftTreeSitter
import TreeSitterQlDbscheme

final class TreeSitterQlDbschemeTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_ql_dbscheme())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading QL DBScheme grammar")
    }
}
