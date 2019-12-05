#include "binary_trees.h"
/**
 * binary_tree_is_leaf1 - Checks if a node is a leaf
 *@node: Pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf1(const binary_tree_t *node)
{

	if (node == NULL)
		return ('\0');

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);

}

/**
 * binary_tree_leaves - Count the leaves in a binary trees
 *@tree: Pointer to the root node
 * Return: Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		count += binary_tree_leaves(tree->left);

	if (tree->right)
		count += binary_tree_leaves(tree->right);

	if (binary_tree_is_leaf1(tree))
		return (1);

	return (count);

}
