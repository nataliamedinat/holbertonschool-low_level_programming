#include "lists.h"
/**
 * free_listint2 - frees a list
 *@head: pointer to first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *tmp2;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	tmp2 = *head; /* start in head*/
	while (head != NULL && tmp2 != NULL)
	{
		tmp = tmp2;
		tmp2 = tmp2->next;
		free(tmp);

	}
		*head = NULL; /*mark as empty list*/


}

