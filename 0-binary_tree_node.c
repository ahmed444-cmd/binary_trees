#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node in a binary tree
 *
 * @parent: Pointer to the parent node
 * @value: Integer value to be stored in the new node
 *
 * Return: Pointer to the newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->left = NULL;
	new->right = NULL;
	new->parent = parent;
	new->n = value;
	return (new);
}
