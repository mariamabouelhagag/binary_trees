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

	size_t left_H = binary_tree_height(tree->left);
	size_t right_H = binary_tree_height(tree->right);
	size_t max_H;

	if (left_H > right_H)
	{
		max_H = left_H;
	}
	else
	{
		max_H = right_H;
	}
	return (max_H + 1);
}
