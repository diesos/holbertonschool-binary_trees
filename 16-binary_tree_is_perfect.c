#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Description: A perfect binary tree is a full binary tree in which all
 * internal nodes have the same number of children. If tree is NULL, return 0.
 *
 * Return: 1 if tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, nodes;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	nodes = binary_tree_nodes(tree);

	if (nodes == 0)
		return (0);

	if (nodes == (2 << height) - 1)
		return (1);
	else
		return (0);
}
