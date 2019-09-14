#include "lists.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
{
	dlistint_t *newnode;
	dlistint_t *tmp;
	
	if (head == NULL) /* If the list is empty*/
		return(NULL);
	
	newnode = malloc(sizeof(dlistint_t))
	if (newnode == NULL) /* If malloc fails*/
		return(NULL)

	newnode->n = n; /*Assigning value to the new node*/
	newnode->next = NULL; /* Last node*/

	if (*head == NULL) 
		newnode->prev = NULL;
		(*head) = newnode; /* New node becomes the head*/
		tmp = head->next; /* Stores the head*/
		tmp->next = newnode; 
		newnode->prev =tmp;
	
	







}
