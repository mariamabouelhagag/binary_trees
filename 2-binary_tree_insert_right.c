#include "binary_trees.h"
/**
 * binary_tree_insert_right - A function that inserts a node
 * as the right-child of another node.
 * @parent: A pointer to the parent node of the node to create.
 * @value: A value to store in the new node.
 * Return: A pointer to the created node,
 * or NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *binary_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	binary_node = binary_tree_node(parent, value);

	if (binary_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		parent->right->parent = binary_node;
		binary_node->right = parent->right;
	}
	parent->right = binary_node;
	return (binary_node);
}
