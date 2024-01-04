#include "binary_trees.h"

/**
* binary_tree_uncle - finds the uncle of a node
* @node: node to check the uncle of
*
* Return: NULL or the uncle
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent->parent == NULL)
	return (NULL);

if (node == node->parent->left)
	return (node->parent->parent->right);

return (node->parent->parent->left);
}
