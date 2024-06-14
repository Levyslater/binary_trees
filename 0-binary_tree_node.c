#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Entry point
 * @parent: pointer to the parent node
 * @value: value of the node to create
 *
 *
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!newnode)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
