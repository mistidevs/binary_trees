#include "binary_trees.h"

/**
* binary_tree_inorder - traversing a binary tree using
* in-order method
* @tree: binary tree to traverse
* @func: print number function
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
	return;

binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
