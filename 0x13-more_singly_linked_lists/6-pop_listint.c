#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes head node
 *@head: pointer to an structure
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);

	}
	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);

	return (data);
}
