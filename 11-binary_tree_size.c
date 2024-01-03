#include "binary_trees.h"

/**
* binary_tree_size - printing the size of a
* binary tree
* @tree: the pointer to the node to start from
*
* Return: size of the binary tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size_r, size_l;

if (tree == NULL)
	return (0);

size_r = binary_tree_size(tree->left);
size_l = binary_tree_size(tree->right);
return (size_r + size_l + 1);
}
