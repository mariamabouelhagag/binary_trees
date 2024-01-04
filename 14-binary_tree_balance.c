#include "binary_trees.h"
/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)height_for_balanced(tree->left));
		right = ((int)height_for_balanced(tree->right));
		total = left - right;
	}
	return (total);
}

/**
 * height_for_balanced - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t height_for_balanced(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left = tree->left ? 1 + height_for_balanced(tree->left) : 1;
			right = tree->right ? 1 + height_for_balanced(tree->right) : 1;
		}
		return ((left > right) ? left : right);
	}
}
