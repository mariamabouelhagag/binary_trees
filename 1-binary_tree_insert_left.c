#include "binary_trees.h"
/**
 * binary_tree_insert_left - A function that inserts a node
 * as the left-child of another node.
 * @parent: - A pointer to the parent node of the node to create.
 * @value: A value to store in the new node.
 * Return: A pointer to the created node,
 * or NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *binary_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	binary_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (binary_node == NULL)
	{
		return (NULL);
	}

	binary_node->n = value;
	binary_node->parent = parent;
	binary_node->left = NULL;
	binary_node->right = NULL;

	if (parent->left != NULL)
	{
		binary_node->left = parent->left;
		parent->left->parent = binary_node;
	}
	else
	{
		parent->left = binary_node;
	}
	return (binary_node);
}
