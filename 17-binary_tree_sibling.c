#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_sibling - Finds the sibling of a node
 *
 * @node: Pointer to the node whose sibling is being sought
 *
 * Return: Pointer to the sibling node, or NULL if not found
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent && node->parent->left && node->parent->right)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		return (node->parent->left);
	}
	return (NULL);
}
