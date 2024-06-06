#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _binary_tree_size - Calculates the size of a tree
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: The size of the tree, or NULL if the tree is empty
 */
size_t _binary_tree_size(const binary_tree_t *tree)
{

	size_t l_size = 0, r_size = 0;

	if (!tree)
		return (0);

	l_size = tree->left ? _binary_tree_size(tree->left) : 0;
	r_size = tree->right ? _binary_tree_size(tree->right) : 0;
	return (l_size + r_size + 1);
}

/**
 * _binary_tree_height - Calculates the height of a tree
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: The height of the tree, or NULL if the tree is empty
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t l_Height = 0, r_Height = 0;

	if (!tree)
		return (0);

	l_Height = tree->left ? 1 + _binary_tree_height(tree->left) : 0;
	r_Height = tree->right ? 1 + _binary_tree_height(tree->right) : 0;

	if (l_Height >= r_Height)
		return (l_Height);
	else
		return (r_Height);
}

/**
 * power - Computes the exponent of a number
 *
 * @base: Base of the number
 * @exp: Exponent of the number
 *
 * Return: Result of the exponentiation
 */
int power(int base, int exp)
{
	int power = 1, i = 1;

	for (i = 1; i <= exp; i++)
	{
		power *= base;
	}
	return (power);
}

/**
 * binary_tree_is_perfect - Checks if a tree is perfect
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: 0 if the tree is NULL or imperfect, and 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size = 0, height = 0, nodes = 0;

	if (tree)
	{
		height = _binary_tree_height(tree) + 1;
		size = _binary_tree_size(tree);
		nodes = power(2, height);

		if (size == (nodes - 1))
			return (1);
		else
			return (0);
	}
	return (0);
}
