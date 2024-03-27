#include "binary_trees.h"
/**
 * binary_tree_sibling - find sibling of given node
 * @node: pointer to node
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int n = 0;
	binary_tree_t *tmp = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);
	n = node->n;
	tmp = node->parent;

	if (tmp->left->n == n && tmp->right != NULL)
		return (tmp->right);
	return (tmp->left);
}
