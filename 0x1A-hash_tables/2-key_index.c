#include "hash_tables.h"
/**
 * key_index - Function that gives the index of a key.
 *@key: Key
 *@size: Size of the array of the hash table
 * Return: Index at which hey/value pair should be store in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (0);

	return (hash_djb2(key) % size);

}
