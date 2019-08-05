#include "lists.h"
#include <string.h>
/**
 * _strlen - Length of a string.
 * @s: pointer.
 * Return: len.
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}

/**
 * add_node - Adds a new node at the beginning.
 * @head: double pointer.
 * @str: string.
 * Return: address of new element or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *list_node;
	char *cstr;

	list_node = malloc(sizeof(list_t));
	if (list_node == NULL)
	{
		return (NULL);
	}

	cstr = strdup(str);
	if (cstr == NULL)
	{
		free(list_node);
		return (NULL);
	}

	list_node->str = cstr;
	list_node->len = _strlen(cstr);
	list_node->next = *head;
	*head = list_node;

	return (list_node);

}
