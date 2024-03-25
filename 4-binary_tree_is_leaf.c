#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: the node to be checked
 * Return: 1 if node is leaf else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int leaf = 0;

	if (node != NULL)
	{
		if ((node->left == NULL) && (node->right == NULL))
			leaf = 1;
	}
	return (leaf);
}
