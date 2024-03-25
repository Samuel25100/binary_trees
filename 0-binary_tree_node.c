#include "binary_trees.h"
/**
 * binary_tree_node - create binary tree node
 * @parent: is a pointer to the parent node of the node to create
 * @value: is the value to put into new node
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = NULL;

	tree = malloc(sizeof(binary_tree_t));
	if (tree == NULL)
		return (NULL);
	tree->parent = parent;
	tree->left = NULL;
	tree->right = NULL;
	tree->n = value;
	return (tree);
}
