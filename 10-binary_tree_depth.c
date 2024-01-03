#include "binary_trees.h"

/**
* binary_tree_depth - determining the depth
* of a node in a binary tree
* @tree: tree to traverse
*
* Return: the depth of the node
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t parent_depth;

if (tree->parent == NULL)
	return (0);

parent_depth = binary_tree_depth(tree->parent);
return (parent_depth + 1);
}
