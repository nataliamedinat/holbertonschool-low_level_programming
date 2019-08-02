#include "lists.h"
/**
 * list_len - Returns the number of elements in list_t.
 * @h: header.
 * Return: Number of nodes.
 */
size_t list_len(const list_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++;

	}
	return (len);

}
