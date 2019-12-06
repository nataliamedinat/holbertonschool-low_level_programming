#include "binary_trees.h"
/**
 * tree_is_full - Checks if a binary tree is full
 *@tree: Pointer to the root
 * Return: 1 or 0
 */
int tree_is_full(const binary_tree_t *tree)
{
	int right = 0;
	int left = 0;


	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
		left = tree_is_full(tree->left);

	if (tree->right)
		right = tree_is_full(tree->right);

	if (left == 1 && right == 1)
		return (1);

	else
		return (0);
}
/**
 * binary_tree_height1 - Measures the height of a binary tree
 *@tree: Pointer to the root node of the tree to measure the height
 * Return: Height
 */
size_t binary_tree_height1(const binary_tree_t *tree)
{
	int right_height = 0;
	int left_height = 0;

	if (tree == NULL)
		return ('\0');

	if (tree->left)
		left_height = binary_tree_height1(tree->left) + 1;

	if (tree->right)
		right_height = binary_tree_height1(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);

	else
		return (right_height);
}

/**
 * tree_balance - Measure the balance factor of a binary tree
 *@tree: Pointer to the root node of the tree.
 * Return: The balance factor
 */
int tree_balance(const binary_tree_t *tree)
{

	int right_height = 0;
	int left_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	left_height = binary_tree_height1(tree->left) + 1;

	if (tree->right)
	right_height = binary_tree_height1(tree->right) + 1;

	return (left_height - right_height);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *@tree: Pointer to the root node of the tree
 * Return: 1 if it´s perfect, 0 no
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree_is_full(tree) && !tree_balance(tree))
	{

		if (binary_tree_is_perfect(tree->left) ==
			binary_tree_is_perfect(tree->right))

			return (1);

		else

			return (0);
	}
	return (0);
}
