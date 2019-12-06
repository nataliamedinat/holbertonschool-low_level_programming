#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full
 *@tree: Pointer to the root
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right = 0;
	int left = 0;


	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
		left = binary_tree_is_full(tree->left);

	if (tree->right)
		right = binary_tree_is_full(tree->right);

	if (left == 1 && right == 1)
		return (1);

	else
		return (0);

}
