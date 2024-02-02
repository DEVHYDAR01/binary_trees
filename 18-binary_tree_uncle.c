#include "binary_trees.h"

/**
 * binary_tree_uncle - This function will find if a node is sibling
 * @node: node to check is ths
 * Return: The uncle node is this
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
