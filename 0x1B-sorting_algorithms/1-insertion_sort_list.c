#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list
 *@list: Double pointer to list
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;

	while (list != NULL)
	{
		while ((current != NULL) && (current->n < current->prev->n))
		{
			current->prev->next = current->next;
			current->next->prev = current->prev;

			current->prev->next = current->prev;
			current->next->prev = current->prev;
			current->prev->next = current;
			current->next->prev = current;
			print_list(*list);
		}
		current = current->next;
	}
}

