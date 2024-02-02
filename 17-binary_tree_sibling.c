#include "binary_trees.h"

/**
 * binary_tree_sibling - This function that find
 * if a node is sibling
 * @node: node to check is this
 * Return: The sibling node is returned
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
