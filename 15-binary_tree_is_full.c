#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the tree
 * Return: 1 if it full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int signal = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left == NULL && tree->right != NULL) ||
		(tree->left != NULL && tree->right == NULL))
		signal = 0;
	else
		signal = 1;
	signal *= binary_tree_is_full(tree->right);
	signal *= binary_tree_is_full(tree->left);
	return (signal);
}
