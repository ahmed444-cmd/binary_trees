#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _binary_tree_sibling - Finds the sibling of a node
 *
 * @node: Pointer to the node whose sibling is being sought
 *
 * Return: Pointer to the sibling node, or NULL if not found
 */
binary_tree_t *_binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent && node->parent->left && node->parent->right)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		return (node->parent->left);
	}
	return (NULL);
}

/**
 * binary_tree_uncle - Finds the uncle of a node
 *
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, NULL if node is NULL or has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (_binary_tree_sibling(node->parent))
		return (_binary_tree_sibling(node->parent));
	return (NULL);

}
