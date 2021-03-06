#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the left-child of another node
 *@parent: Pointer to the node to insert left-child
 *@value: Value to store in the new node
 * Return: Pointer to the created node, null on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *old;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		old = parent->right;
		newnode->right = old;
		old->parent = newnode;
	}

	parent->right = newnode;

	return (newnode);
}
