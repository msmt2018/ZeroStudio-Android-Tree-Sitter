package tree_sitter_arm64_test

import (
	"testing"

	tree_sitter_arm64 "github.com/mysteriouslyseeing/tree-sitter-arm64/"
	tree_sitter "github.com/tree-sitter/go-tree-sitter"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_arm64.Language())
	if language == nil {
		t.Errorf("Error loading Arm64 grammar")
	}
}
