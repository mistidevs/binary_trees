#include "binary_trees.h"

/**
* binary_tree_nodes - finding a node with at least
* 1 child in a binary tree
* @tree: binary tree or sub tree to search
*
* Return: number of nodes
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t num_nodes_l, num_nodes_r;

if (tree == NULL)
	return (0);

num_nodes_l = binary_tree_nodes(tree->left);
num_nodes_r = binary_tree_nodes(tree->right);

if (tree->left != NULL || tree->right != NULL)
	return (num_nodes_r + num_nodes_l + 1);

return (0);
}
