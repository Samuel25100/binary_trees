#include "binary_trees.h"
/**
 * binary_tree_height - measures the height level of a binary tree
 * @tree: pointer to the tree
 * Return: height else 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, count = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		count = left + 1;
	else
		count = right + 1;
	if (tree->left == NULL && tree->right == NULL)
		count -= 1;
	return (count);
}
