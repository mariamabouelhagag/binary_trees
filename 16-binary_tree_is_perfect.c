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
