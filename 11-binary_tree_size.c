#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_size - Measures the size of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: The size of the tree, or NULL if the tree is empty
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size_tree = 0, r_size_tree = 0, total_size_tree = 0;

	if (!tree)
		return (0);
	l_size_tree = binary_tree_size(tree->left) + 1;
	r_size_tree = binary_tree_size(tree->right) + 1;
	total_size_tree = l_size_tree + r_size_tree;
	return (total_size_tree - 1);
}
