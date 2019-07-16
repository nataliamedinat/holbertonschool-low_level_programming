#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate string
 *@str: value
 *@cpy: copy
 * Return: null.
 */
char *_strdup(char *str)
{
	char *cpy;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

		for (i = 0; str[i] != '\0'; i++)
		{
		}

		i++;
		cpy = malloc(i * sizeof(char));

		if (cpy == NULL)
		{
			return (NULL);
		}

		for (j = 0; j < i; j++)
		{
			cpy[j] = str[j];
		}
		return (cpy);

}
