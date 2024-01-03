#include "binary_trees.h"

/**
* binary_tree_insert_left - adding a new node to a
* binary tree with preference to the left side
* @parent: the parent node to which the child node
* will be attached
* @value: the value the node will hold
*
* Return: a binary tree node
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
	return (NULL);

new_node = binary_tree_node(parent, value);
if (new_node == NULL)
	return (NULL);

new_node->left = parent->left;
if (new_node->left != NULL)
	new_node->left->parent = new_node;
parent->left = new_node;

return (new_node);
}
