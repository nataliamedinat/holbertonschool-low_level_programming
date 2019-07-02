#include "holberton.h"
/**
 * _strlen - check the code for Holberton School students.
 *@s: value
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int cont;

	cont = 0;
	while (s[cont])
	{
	cont++;
	}
	return (cont);
}
