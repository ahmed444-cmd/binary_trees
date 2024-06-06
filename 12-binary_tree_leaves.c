#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the leaves
 *
 * Return: The number of leaves in the tree, or NULL if the tree is empty
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_no_leaf = 0, r_no_leaf = 0, total_no_leaf = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	l_no_leaf = binary_tree_leaves(tree->left);
	r_no_leaf = binary_tree_leaves(tree->right);

	total_no_leaf = l_no_leaf + r_no_leaf;
	return (total_no_leaf);
}
