#include "binary_trees.h"
/**
 * binary_tree_is_perfect - A function that checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 0 If tree is NULL.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (1);

	if (tree->right && tree->left)
	{
		if (tree->left->left == NULL && tree->right->right == NULL) &&
		    (tree->right->left == NULL && tree->left->right == NULL)
			    return (1);
		return (binary_tree_is_perfect(tree->right) &&
			binary_tree_is_perfect(tree->left));
	}
	return (0);
}
