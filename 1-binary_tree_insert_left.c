#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to be inserted
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *lefty = NULL, *tmp = NULL;

	if (parent == NULL)
		return (NULL);
	lefty = malloc(sizeof(binary_tree_t));
	if (lefty == NULL)
		return (NULL);

	lefty->n = value;
	lefty->right = NULL;
	lefty->left = NULL;
	if (parent->left != NULL)
	{
		tmp = parent->left;
	}
	parent->left = lefty;
	lefty->parent = parent;
	lefty->left = tmp;
	if (tmp != NULL)
		tmp->parent = lefty;
	return (lefty);
}
