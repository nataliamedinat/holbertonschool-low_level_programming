#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - new node at the end
 *@head: pointer to structure
 *@n: number
 * Return: addres of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tmp;
	
	tmp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newnode;


	}
		return (newnode);
}

