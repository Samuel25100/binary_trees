#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the tree
 * Return: balance factor or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		return (2);
	else if (tree->left != NULL || tree->right != NULL)
		return (-1);
	return (0);
}
