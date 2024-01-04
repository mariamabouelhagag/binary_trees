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
	size_t left_H = 0;
	size_t right_H = 0;

	if (!tree)
		return (0);

	lift_H = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_H = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (left_H > right_H ? left_H : right_H);
}
