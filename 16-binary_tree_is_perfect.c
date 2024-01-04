#include "binary_trees.h"

/**
 * _height - Measures the height of a binary tree
 *
 * @tree: Pointer to the node to measures the height
 *
 * Return: The height of the tree starting at @node
 */

int _height(const binary_tree_t *tree)
{
int height_l;
int height_r;

height_l = tree->left ? 1 + _height(tree->left) : 0;
height_r = tree->right ? 1 + _height(tree->right) : 0;
return (height_l > height_r ? height_l : height_r);
}

/**
* binary_tree_is_perfect - checks if binary tree is perfect
* @tree: tree or subtree to check
*
* Return: 0 if not perfect; 1 if perfect
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
int left_height = 0, right_height = 0;

if (tree == NULL)
	return (0);

if (tree->left == NULL && tree->right == NULL)
	return (1);

left_height = _height(tree->left);
right_height = _height(tree->right);

return ((left_height == right_height) &&
	binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
}
