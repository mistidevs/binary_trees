#include "binary_trees.h"

/**
* binary_tree_balance - measures the balance factor
* of a binary tree
* @tree: tree or sub tree to check
*
* Return: the balance factor of the tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{
int bal_r = 0, bal_l = 0;

if (tree == NULL)
	return (0);

if (tree->left != NULL)
	bal_l = 1 + binary_tree_balance(tree->left);
if (tree->right != NULL)
	bal_r = 1 + binary_tree_balance(tree->right);

return (bal_l - bal_r);
}
