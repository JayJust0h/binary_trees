#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts the right-child of another node.
 * @parent: A pointer to the right-child in.
 * @value:  Value to store in the new node.
 * Return: Pointer of created node, or NULL (failure).
 * T&J.
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
