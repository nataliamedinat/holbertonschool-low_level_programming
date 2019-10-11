#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table
 *@size: Size of the array
 * Return: Pointer to the newly created hash table, on error, return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)

	hash_table_t *new_table /* New table created*/

	new_table = malloc(sizeof(hash_table_t)); /* Malloc for the new table*/
	if (new_table == NULL) /* If malloc fails*/
		return (NULL);

