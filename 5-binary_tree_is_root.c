#include "binary_trees.h"

/**
 * binary_tree_is_root - Check node is root.
 * @node: Pointer to the node to check
 * Return: 1 for root, 0 not root
 * T&J
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
