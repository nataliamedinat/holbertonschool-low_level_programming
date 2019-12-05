#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 *@tree: Pointer to the root node of the tree to measure the height
 * Return: Height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right_height = 0;
	int left_height = 0;

	if (tree == NULL)
		return ('\0');

	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;

	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);

	else
		return (right_height);
}
