package tree_sitter_ql_dbscheme_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_ql_dbscheme "github.com/tree-sitter/tree-sitter-ql_dbscheme/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ql_dbscheme.Language())
	if language == nil {
		t.Errorf("Error loading QlDbscheme grammar")
	}
}
