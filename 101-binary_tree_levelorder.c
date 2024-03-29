#include "binary_trees.h"
/**
 * binary_tree_levelorder - travers binary tree in tree-level order
 * @tree: pointer to the tree root
 * @func: printer function
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t **order = {NULL}, *current = NULL;
	int first = 0, sec = 0;

	if (tree == NULL || func == NULL)
		return;

	order = malloc(sizeof(binary_tree_t *) * 100);
	if (order == NULL)
		return;
	order[sec++] = (binary_tree_t *) tree;
	while (first < sec)
	{
	current = order[first++];
	func(current->n);

	if (current->left != NULL)
		order[sec++] = current->left;
	if (current->right != NULL)
		order[sec++] = current->right;
	}
	free(order);
}
