#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *@h: Double pointer to the head
 *@idx: Index of the list
 *@n: Value of the new node
 * Return: The addres of the new node, or null if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *tmp;
	unsigned int count = 0;

	tmp = *h;

	if (h == NULL)  /* If list is empty*/
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL) /* If malloc fails*/
		return (NULL);

	newnode->n = n; /* Assigning value to new node*/

	if (idx == 0)
	{
		newnode = add_dnodeint (h, n);
		return (newnode);
	}

	while (count < idx) /* Goes thru the list*/
	{
		tmp = tmp->next;
		count++;
	}

	if (tmp == NULL)
	{
		newnode = add_dnodeint (h, n);
		return (newnode);
	}
		newnode->next = tmp;
		newnode->prev = tmp->prev;
		tmp->prev->next = newnode;
		tmp->prev = newnode;

	return (newnode);
}
