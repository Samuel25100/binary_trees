#include "binary_trees.h"
/**
 * binary_tree_postorder - transvers binary tree using post-order traversal
 * @tree: pointer to root
 * @func: pointer to a function to call for each node
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
	}
}
