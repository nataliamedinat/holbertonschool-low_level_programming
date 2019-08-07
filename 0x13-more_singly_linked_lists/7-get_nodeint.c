#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a linked list.
 *@head: pointer to first node
 *@index:index of the node
 * Return: the nth node of the list or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int cont;

	h = head;

	cont = 0;
	while (cont != index)
	{

		if (h->next == NULL)
		{
		return (NULL);
		}

		h = h->next;
		cont++;
	}

	return (h);

}
