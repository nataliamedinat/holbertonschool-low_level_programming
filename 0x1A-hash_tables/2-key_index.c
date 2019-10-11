#include "hash_tables.h"
/**
 * hash_djb2 - Algorithm.
 *@str: Pointer to the string
 * Return: Number
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
	hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);

/**
 * key_index - Function that gives the index of a key.
 *@key: Key
 *@size: Size of the array of the hash table
 * Return: Index at which hey/value pair should be store in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
		return (NULL);

	return (hash_djb2(key) % size);

}
