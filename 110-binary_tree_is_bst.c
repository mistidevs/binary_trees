#include "binary_trees.h"

/**
* is_bst_helper - checks if it is a BST
* @tree: tree or subtree to check
* @min: minimum value
* @max: maximum value
*
* Return: 0 or 1
*/

int is_bst_helper(const binary_tree_t *tree, int min, int max)
{
if (tree == NULL)
	return (1);

if (tree->n < min || tree->n > max)
	return (0);

return (is_bst_helper(tree->left, min, tree->n - 1) &&
is_bst_helper(tree->right, tree->n + 1, max));
}

/**
* binary_tree_is_bst - main function
* @tree: tree to check
*
* Return: 0 or 1
*/

int binary_tree_is_bst(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);

return is_bst_helper(tree, INT_MIN, INT_MAX);
}
