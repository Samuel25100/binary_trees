#include "binary_trees.h"
/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the tree
 * Return: 1 if it complete else 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t **order = {NULL}, *current = NULL;
	int first = 0, sec = 0, previous = 0;

	if (tree == NULL)
		return (0);

	order = malloc(sizeof(binary_tree_t *) * 100);
	if (order == NULL)
		return (0);
	order[sec++] = (binary_tree_t *) tree;
	while (first < sec)
	{
	current = order[first++];
	if (current == NULL)
	{
	previous = 1;
	continue;
	}
	if (previous == 1)
	{
	free(order);
	return (0);
	}
	order[sec++] = current->left;
	order[sec++] = current->right;
	}
	free(order);
	return (1);
}
