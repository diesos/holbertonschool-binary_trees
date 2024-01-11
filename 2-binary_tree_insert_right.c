#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child
 * of a given parent node
 * @parent: Pointer to the parent node where the new node will be
 * added as the right child
 * @value: The integer value to be stored in the new node
 * Return: Pointer to the newly created node or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		fprintf(stderr, "Error, there is no parent");
		exit(EXIT_FAILURE);
	}

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
