#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire tree
 * @tree: Pointer to the root node
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *node;

	while (tree->left != NULL || tree->right != NULL)
	{
		if (tree->left == NULL)
			tree = tree->right;
		else
			tree = tree->left;
	}

	if (tree->parent != NULL)
	{
		node = tree->parent;
		if (tree->parent->right == tree)
			tree->parent->right = NULL;
		else
			tree->parent->left = NULL;

		free(tree);
		tree = NULL;
		binary_tree_delete(node);
	}
	free(tree);
	tree = NULL;
}
