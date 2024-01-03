#include "binary_trees.h"

/**
* binary_tree_insert_right - adding a new node to a
* binary tree with preference to the right side
* @parent: the parent node to which the child node
* will be attached
* @value: the value the node will hold
*
* Return: a binary tree node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
	return (NULL);

new_node = binary_tree_node(parent, value);
if (new_node == NULL)
	return (NULL);

new_node->right = parent->right;
if (new_node->right != NULL)
	new_node->right->parent = new_node;
parent->right = new_node;

return (new_node);
}
