#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/* Standard library */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* Structure */

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

#endif