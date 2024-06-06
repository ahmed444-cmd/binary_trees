#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node
 *
 * @parent: Pointer to the parent node
 * @value: Integer value to be stored in the new node
 *
 * Return: Pointer to the newly created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		parent->left = new;
		return (new);
	}
	temp = parent->left;
	parent->left = new;
	new->left = temp;
	temp->parent = new;

	return (new);
}
