#include "binary_trees.h"
/**
 *binary_tree_node- Creates a binary tree node.
 *@parent: Pointer  to the parent node of the node to create
 *@value: Value to put in the new node
 * Return: Return a pointer to the new node, NUll on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode; /* New node created */

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value; /* Put the value on the new node*/
	newnode->parent = parent;

	return (newnode);
}
