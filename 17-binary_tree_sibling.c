#include "binary_trees.h"

/**
* binary_tree_sibling - find the sibling of node
* @node: node to check sibling of
*
* Return: sibling or NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
	return (NULL);

if (node == node->parent->left)
	return (node->parent->right);

return (node->parent->left);
}
