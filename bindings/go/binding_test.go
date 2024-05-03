package tree_sitter_dbscheme_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-dbscheme"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_dbscheme.Language())
	if language == nil {
		t.Errorf("Error loading Dbscheme grammar")
	}
}
