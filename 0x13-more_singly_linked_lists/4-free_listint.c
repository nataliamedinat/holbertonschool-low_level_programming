#include "lists.h"
/**
 * free_listint- free a list
 *@head: pointer to the first node
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}



}

