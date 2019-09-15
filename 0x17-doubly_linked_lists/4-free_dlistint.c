#include "lists.h"
/**
 *  free_dlistint- free a list
 *@head: Pointer to the first element of the list
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL) /* Goes thru the list*/
	{
		next = head->next;
		free(head);
		head = next;
	}


}

