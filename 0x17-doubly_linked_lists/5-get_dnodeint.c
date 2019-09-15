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

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	while (count < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}

		count++;
		head = head->next;
	}
		return (head);


}
