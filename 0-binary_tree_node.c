#include "binary_trees.h"

/**
 * binary_tree_node - Function creates a binary tree node.
 * @parent: Pointer to the parent node to create.
 * @value: Value to assign new node.
 * Return: New node-NULL on failure.
 * T&J
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}

