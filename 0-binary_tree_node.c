#include "binary_trees.h"

/**
* binary_tree_node - adding a new node to a
* binary tree with preference to the left side
* @parent: the parent node to which the child node
* will be attached
* @value: the value the node will hold
*
* Return: a binary tree node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

if (new_node == NULL)
	return (NULL);

new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;
new_node->n = value;

return (new_node);
}
