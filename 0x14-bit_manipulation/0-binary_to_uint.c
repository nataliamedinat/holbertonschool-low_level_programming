#include "holberton.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *@b :pointer to a string
 * Return: int.
 */
unsigned int binary_to_uint(const char *b)
{
	int cont = 0;
	int p = 0;
	unsigned int a = 0;

	if (b == NULL)
		return (0);

		while (b[cont + 1] != '\0')
		{
			cont++;
		}

		p = 1;
		while (cont >= 0)
		{
			if (b[cont] != '0' && b[cont] != '1')
			{
				return (0);
			}
		a += (b[cont] - '0') * p;
		p *= 2;
		cont--;
		}
		return (a);

}
