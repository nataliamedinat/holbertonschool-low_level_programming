#include "lists.h"
/**
 * listint_len - return the number of elements
 *@h: first node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
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
