#include "binary_trees.h"

/**
* binary_tree_leaves - counts leaves in a binary tree
* @tree: pointer to node to start at
*
* Return: 0 or number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaf_num = 0;

if (tree == NULL)
	return (0);

if (tree->left != NULL)
	leaf_num += 1;

if (tree->right != NULL)
	leaf_num += 1;
else
	leaf_num = 1;

return (leaf_num);
}
