#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: the node to be check
 * Return: if node is root 1 else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int leaf = 0;

	if (node != NULL)
	{
		if (node->parent == NULL)
			leaf = 1;
	}
	return (leaf);
}
