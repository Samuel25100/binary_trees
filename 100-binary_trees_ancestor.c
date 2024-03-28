#include "binary_trees.h"
size_t tree_depth(const binary_tree_t *tree);
/**
 * binary_trees_ancestor - find the lowest common ancestor for two trees
 * @first: the pointer to the one of subtree to found common ancestor
 * @second: the pointer to the second sub-tree
 * Return: pointer to node of ancestor or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t f = 0, s = 0;
	binary_tree_t *tf = (binary_tree_t *)first, *ts = (binary_tree_t *)second;

	if (first == NULL || second == NULL)
		return (NULL);
	f = tree_depth(first);
	s = tree_depth(second);

	if (((s - f) == 1) && (first->n == second->parent->n))
		return ((binary_tree_t *)first);
	else if (((f - s) == 1) && (second->n == first->parent->n))
		return ((binary_tree_t *)second);
	while (f != 0 && s != 0)
	{
		if (f > s)
		{
		f--;
		tf = tf->parent;
		}
		else if (s > f)
		{
		s--;
		ts = ts->parent;
		}
		else if (f == s)
			break;
	}
	if (f == s)
	{
		while (tf != NULL && ts != NULL)
		{
		if (tf == ts)
			return (ts);
		tf = tf->parent;
		ts = ts->parent;
		}
	}
	return (NULL);
}
/**
 * tree_depth - measures the depth of a binary tree
 * @tree: pointer to the tree
 * Return: height else 0
 */
size_t tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	count = tree_depth(tree->parent);
	if (tree->parent == NULL)
		count -= 1;
	return (count + 1);
}
