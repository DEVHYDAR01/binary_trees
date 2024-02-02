#include "binary_trees.h"
/**
 * binary_tree_delete - freed an entire tree using recursion it free the node
 * when the node left and right are NULL node delete
 * @tree: tree to free is this
 * Return: Nothing is returned
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
