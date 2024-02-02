#include "binary_trees.h"
/**
 * binary_tree_size - function will return the size of a tree
 * @tree: tree to check is this
 * Return: size of tree is returned
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, j = 0, k = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		k = binary_tree_size(tree->left);
		j = binary_tree_size(tree->right);
		size = j + k + 1;
	}
	return (size);
}
