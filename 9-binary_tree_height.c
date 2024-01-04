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
	if (!tree)
	{
		return (0);
	}

	size_t left_H = binary_tree_height(tree->left) + 1;
	size_t right_H = binary_tree_height(tree->right) + 1;

	if (left_H > right_H)
	{
		return (left_H);
	}
	else
	{
		return (right_H);
	}
}
