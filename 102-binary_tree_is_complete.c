#include "binary_trees.h"

/**
* is_complete_subtree - checks for a complete subtree
* @node: node to start at
* @index: index to start at
* @count: number of nodes max expected
*
* Return: integer value
*/

int is_complete_subtree(const binary_tree_t *node, int index, int count)
{
if (node == NULL)
	return (1);

if (index > count)
	return (0);

return (is_complete_subtree(node->left, 2 * index, count) &&
is_complete_subtree(node->right, 2 * index + 1, count));
}

/**
* _size - finds size of tree
* @tree: tree to check
*
* Return: size of the tree
*/

int _size(const binary_tree_t *tree)
{
if (tree == NULL)
	return (0);

return (1 + _size(tree->left) + _size(tree->right));
}

/**
* binary_tree_is_complete - checks if a binary tree is complete
* @tree: the tree to check
*
* Return: 0 or 1
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
int count;

if (tree == NULL)
	return (0);

count = _size(tree);

return (is_complete_subtree(tree, 1, count));
}
