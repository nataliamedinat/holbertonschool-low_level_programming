#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table
 *@ht: Hash table that i want to add or update the key/value
 *@key: Key,can not be an empty string
 *@value: Value associated with key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned int idx = key_index(key, size);
	hash_node_t tmp = *ht->array[idx];

	if (ht == NULL) /* If hashtable is null*/
		return (0);

	node = malloc(sizeof(hash_node_t)); /* Malloc for node*/
	if (node == NULL) /* If malloc fails*/
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	if (ht->array[idx] != NULL)
	{
		tmp-> ht->array[idx];

		while (tmp != NULL)  /* If its not null, means that has another value inside*/
		{
			if (strcmp(tmp->key, tmp->key) == 0)
		}		break;
			tmp = tmp->next;

		if (tmp == NULL) /* If tis null, insert the value*/
		{
			node->next =ht->array[idx];
			ht->array[idx] = node;
		}

	}
		else
		{
			free(tmp->value);
			tmp->value = strdup(node->value);
			free(node->value);
			free(node->key);
			free(node);
		}
		node->next = NULL;
		ht->array[idx] = node;
}
