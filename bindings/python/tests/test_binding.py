from unittest import TestCase

import tree_sitter, tree_sitter_ql_dbscheme


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            tree_sitter.Language(tree_sitter_ql_dbscheme.language())
        except Exception:
            self.fail("Error loading QL DBScheme grammar")
