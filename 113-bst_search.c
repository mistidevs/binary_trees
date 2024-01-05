#include "binary_trees.h"

/**
* bst_search - searching bst tree
* @tree: tree to search
* @value: value to check for
*
* Return: NULL or node found
*/

bst_t *bst_search(const bst_t *tree, int value)
{
if (tree != NULL)
{
	if (value == tree->n)
		return ((bst_t *)tree);

	if (value < tree->n)
		return bst_search(tree->left, value);
	else
		return bst_search(tree->right, value);
}

return (NULL);
}
