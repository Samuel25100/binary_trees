#include "binary_trees.h"
size_t tree_height(const binary_tree_t *tree);
size_t tree_size(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the tree
 * Return: 0 or 1 if it perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l, r, l_s, r_s;

	l = tree_height(tree->left);
	r = tree_height(tree->right);
	l_s = tree_size(tree->left);
	r_s = tree_size(tree->right);
	if ((l == r) && (l_s == r_s))
		return (1);
	return (0);
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
/**
 * tree_size - measures the size of a binary tree
 * @tree: pointer to the tree
 * Return: size else 0
 */
size_t tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	count += tree_size(tree->left);
	count += tree_size(tree->right);

	return (count + 1);
}
