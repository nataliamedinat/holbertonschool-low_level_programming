#include "binary_trees.h"
/**
 * binary_tree_leaves - Count the leaves in a binary trees
 *@tree: Pointer to the root node
 * Return: Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	leaf_counter = binary_tree_is_leaf(tree);


	if (tree == NULL)
		return ('\0');

	if (leaf_counter == 1)
		return (leaf_counter);

}
