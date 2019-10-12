#include "hash_tables.h"
/**
 * add_node - Adds a node
 * @head: Array
 * @str: String to pass
 * @key: Key
 * Return: Pointer to node
 */
hash_node_t *add_node(hash_node_t **head, const char *str, const char *key)
{
	hash_node_t *tmp;

	if (head == NULL)
	{
		return (NULL);
	}
	tmp = *head;
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->value = strdup(str);
	tmp->key = strdup(key);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
/**
 * hash_table_set - Adds an element to the hash table
 *@ht: Hash table that i want to add or update the key/value
 *@key: Key,can not be an empty string
 *@value: Value associated with key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *tmp = ht->array[idx];
	int flag = 0;

	if (ht == NULL || key == NULL || value == NULL) /* If hashtable is null*/
		return (0);

	if (tmp == NULL)
	{
		if (add_node(&(ht->array[idx]), value, key) == NULL)
			return (0);
	}
	else
	{
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp->value = strdup(value);
				flag = 1;
			}
			tmp = tmp->next;
		}
		if (flag == 0)
		{
			if (add_node(&(ht->array[idx]), value, key) == NULL)
				return (0);
		}

	}
	return (1);
}
