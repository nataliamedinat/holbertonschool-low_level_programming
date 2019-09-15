#include "lists.h"
/**
 * sum_dlistint - sum all the date of a list
 *@head: pointer to the list
 * Return: sum of al the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp;

	tmp = head;

	if (head == NULL)
		return (0);


	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);


}
