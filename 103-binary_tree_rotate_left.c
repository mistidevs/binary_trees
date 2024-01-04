#include "binary_trees.h"

/**
* binary_tree_rotate_left - rotating a binary tree left
* @tree: tree to rotate
*
* Return: pointer to new root node
*/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *b;

if (tree == NULL || tree->right == NULL)
	return (tree);

b = tree->right;
tree->right = b->left;

if (b->left != NULL)
	b->left->parent = tree;

b->left = tree;
b->parent = tree->parent;
tree->parent = b;

return (b);
}

