#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to the tree
 * Return: height else 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count = binary_tree_depth(tree->parent);
	if (tree->parent == NULL)
		count -= 1;
	return (count + 1);
}
