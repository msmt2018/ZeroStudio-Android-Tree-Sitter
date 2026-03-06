package tree_sitter_arm_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_arm "github.com/tree-sitter/tree-sitter-arm/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_arm.Language())
	if language == nil {
		t.Errorf("Error loading Arm grammar")
	}
}
