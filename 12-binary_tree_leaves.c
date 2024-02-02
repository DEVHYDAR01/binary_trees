#include "binary_trees.h"
/**
 * binary_tree_leaves - This function will
 * returns the number of leaves in a tree
 * @tree: tree to check is this
 * Return: number of leaves is returned
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, q = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		q = binary_tree_leaves(tree->left);
		r = binary_tree_leaves(tree->right);
		leaf = q + r;
		return ((!q && !r) ? leaf + 1 : leaf + 0);
	}
}
