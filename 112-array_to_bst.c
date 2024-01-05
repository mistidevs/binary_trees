#include "binary_trees.h"

/**
* array_to_bst - converting an array to a BST
* @array: array to convert
* @size: size of the array
*
* Return: root node of BST
*/

bst_t *array_to_bst(int *array, size_t size)
{
bst_t *root = NULL;
size_t i;

if (!array || size == 0)
	return (NULL);

for (i = 0; i < size; i++)
	bst_insert(&root, array[i]);

return (root);
}
