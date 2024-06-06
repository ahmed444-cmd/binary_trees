#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 *
 * @tree: Pointer to the node to measure
 *
 * Return: The depth of the node, or NULL if the tree is empty
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_node = 0;

	if (tree != NULL && tree->parent != NULL)
	{
		depth_node = binary_tree_depth(tree->parent) + 1;
		return (depth_node);
	}
	return (0);
}
