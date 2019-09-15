#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a lsit.
 *@head: Pointer to the list
 *@n: new element value.
 * Return: Address of the new element, or null if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *tmp;

	if (head == NULL) /* If the list is empty*/
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL) /* If malloc fails*/
		return (NULL);

	newnode->n = n; /*Assigning value to the new node*/
	newnode->next = NULL; /* Last node*/

	if (*head == NULL)
	{
		newnode->prev = NULL;
		(*head) = newnode; /* New node becomes the head*/
		return (newnode);
	}

		tmp = *head; /* Stores the head*/


	while (tmp->next != NULL) /* Goes thru the list*/
	{
		tmp = tmp->next;
	}
		tmp->next = newnode;
		newnode->prev = tmp;

	return (newnode);

}
