#include "binary_trees.h"

/**
* binary_tree_is_root - checks if node is root
* @node: node to check if it is root
*
* Return: 1 if node is root; 0 otherwise or node is NULL
*/

int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
	return (0);

if (node->parent == NULL)
	return (1);

return (0);
}
