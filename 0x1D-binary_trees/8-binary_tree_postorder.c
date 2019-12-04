#include "binary_trees.h"
/**
 * binary_tree_postorder - Goes through a binary tree using post-order
 *@tree: Pointer to the root node of the tree to traverse
 *@func: Pointer function to call for each node. Value passed as parameter
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left)
		binary_tree_postorder(tree->left, func);

	if (tree->right)
		binary_tree_postorder(tree->right, func);

	func(tree->n);

}
