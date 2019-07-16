#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: the size of the memory to print
 * @c: char value
 *
 * Return: 0 if size is zero, otherwhise a ponter to the array or null if fails
 */

char *create_array(unsigned int size, char c)
{
char *b = malloc(size);
unsigned int a;

	if (size == 0 || b == NULL)
	{
	return (NULL);
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			b[a] = c;
		}
			b[a] = '\0';
			return (b);
	}


}
