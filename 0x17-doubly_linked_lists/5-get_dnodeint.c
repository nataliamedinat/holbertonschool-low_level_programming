#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list.
 *@head : pointer to the first element of the list
 *@index: index of the node
 * Return: the nth node of a list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	while (count < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}

		coun++;
		head = head->next;
	}
		return (head);


}
