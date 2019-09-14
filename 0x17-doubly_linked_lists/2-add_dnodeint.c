#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginnig of a list
 *@head: list
 *@n: new element value
 * Return: address of the new element, if it fails null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL) /* if the list is empty return null */
		return (NULL);

	newnode = malloc(sizeof(dlistint_t)); /* Reserving memory space newnode*/

	if (newnode == NULL) /* if malloc fails*/
		return (NULL);

		newnode->n = n; /* Assigning value to the new node */

		newnode->prev = NULL;
		newnode->next = *head; /* For that the head doesn´t get lost*/

	if (*head != NULL)
		(*head)->prev = newnode;

		(*head) = newnode;

	return (newnode);

}

