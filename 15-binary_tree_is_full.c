#include "binary_trees.h"
/**
 * binary_tree_is_full - A function that checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 0 If tree is NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	if (tree->right || tree->left)
		return (0);

	return (1);
}
