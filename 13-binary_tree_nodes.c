#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_nodes - Counts the nodes in a binary tr with at least one child
 *
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: The number of nodes in the tree, or NULL if the tree is empty
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t no_node = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	no_node++;
	no_node += binary_tree_nodes(tree->left);
	no_node += binary_tree_nodes(tree->right);
	return (no_node);
}
