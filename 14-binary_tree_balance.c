#include "binary_trees.h"
size_t tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the tree
 * Return: balance factor or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL)
		return (0);
	l = (tree_height(tree->left));
	r = (tree_height(tree->right));
	return (l - r);
}
/**
 * tree_height - return the height of tree
 * @tree: pointer to the tree
 * Return: depth
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, count = 0;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);
	if (left > right)
		count = left;
	else
		count = right;
	return (count + 1);
}
