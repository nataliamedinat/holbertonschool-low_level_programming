#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table
 *@size: Size of the array
 * Return: Pointer to the newly created hash table, on error, return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table; /* New table created*/
	hash_table_t **array;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t)); /* Malloc for the new table*/
	if (new_table == NULL) /* If malloc fails*/
		return (NULL);

	new_table->size = size;
	array = calloc(size, sizeof(hash_node_t));
	/* Create the array and reserve de space*/
	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}
	new_table->array = array;
	return (new_table);
}
