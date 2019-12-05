#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node
 *@tree: Pointer to the node to measure the depth
 * Return: Depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return ('\0');

	if (tree->parent == NULL) /* Means that it is the root*/
		return (0);

	else
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
