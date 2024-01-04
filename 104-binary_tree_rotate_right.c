#include "binary_trees.h"

/**
* binary_tree_rotate_right - rotating a binary tree right
* @tree: tree to rotate
*
* Return: pointer to new root node
*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *b;

if (tree == NULL || tree->left == NULL)
	return (tree);

b = tree->left;
tree->left = b->right;

if (b->right != NULL)
	b->right->parent = tree;

b->right = tree;
b->parent = tree->parent;
tree->parent = b;

return (b);
}
