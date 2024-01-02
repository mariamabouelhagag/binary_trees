#include "binary_trees.h"
/**
 * binary_tree_node - Creates a new binary tree node
 *
 * @parent: - is a pointer to the parent node of the node to create
 * @value: - is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *binary_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (binary_node == NULL)
	{
		return (NULL);
	}
	binary_node->parent = parent;
	binary_node->value = value;
	binary_node->left = NULL;
	binary_node->right = NULL;
	return (binary_node);
}
