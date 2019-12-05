#include "binary_trees.h"
/**
 * binary_tree_size - Size of a binary tree
 *@tree: Pointer to the root node of the three to measure the size
 * Return: Size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size_right = 0;
	int size_left = 0;
	int total_size = 0;

	if (tree == NULL)
		return ('\0');

	if (tree->left)
		size_left = binary_tree_size(tree->left);

	if (tree->right)
		size_right = binary_tree_size(tree->right);

	total_size = size_right + size_left + 1;

	return (total_size);
}
