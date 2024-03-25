#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to be input
 * Return: pointer to the created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *righty = NULL, *tmp = NULL;

	if (parent == NULL)
		return (NULL);
	righty = malloc(sizeof(binary_tree_t));
	if (righty == NULL)
		return (NULL);
	righty->n = value;
	righty->left = NULL;
	righty->right = NULL;
	if (parent->right != NULL)
		tmp = parent->right;
	parent->right = righty;
	righty->parent = parent;
	righty->right = tmp;
	if (tmp != NULL)
		tmp->parent = righty;
	return (righty);
}
