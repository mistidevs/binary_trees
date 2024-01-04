#include "binary_trees.h"

/**
* traverse_level - helper function to traverse levels
* @node: node at current level
* @level: level one is at
* @func: function to apply
*
* Return: void
*/

void traverse_level(const binary_tree_t *node, int level, void (*func)(int))
{
if (node == NULL)
	return;

if (level == 1)
	func(node->n);
else
{
	traverse_level(node->left, level - 1, func);
	traverse_level(node->right, level - 1, func);
}
}


/**
 * _height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
int _height(const binary_tree_t *tree)
{
int l, r;

if (tree)
{
	l = 0, r = 0;
	l = tree->left ? 1 + _height(tree->left) : 1;
	r = tree->right ? 1 + _height(tree->right) : 1;
	return ((l > r) ? l : r);
}

return (0);
}

/**
* binary_tree_levelorder - traverse a tree using
* level order method recursively
* @tree: tree to traverse
* @func: function to apply
*
* Return: void
*/

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
int height, level;

if (tree == NULL || func == NULL)
	return;

height = _height(tree);

for (level = 1; level <= height; level++)
	traverse_level(tree, level, func);
}
