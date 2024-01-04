#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t left_high = binary_tree_height(tree->left) + 1;
	size_t right_high = binary_tree_height(tree->right) + 1;

	if (left_high > right_high)
	{
		return(left_high);
	}
	else
	{
		return (right_high);
	}
}
