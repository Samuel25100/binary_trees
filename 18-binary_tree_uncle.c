#include "binary_trees.h"
/**
 * binary_tree_uncle - return uncle of the given node
 * @node: pointer to node
 * Return: pointer to uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *gp = NULL, *p = NULL;
	int val = 0;

	if (node == NULL)
		return (NULL);
	if (node->parent != NULL)
	{
		p = node->parent;
		val = p->n;
	}
	else
		return (NULL);
	if (p->parent != NULL)
		gp = p->parent;
	else
		return (NULL);
	if (gp->left->n == val)
		return (gp->right);
	return (gp->left);
}
