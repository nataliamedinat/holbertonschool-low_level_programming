#include "holberton.h"
/**
 * _strlen - check the code for Holberton School students.
 *@s: pointer
 *
 * Return: len
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	return (len);
}

/**
 * print_rev - check the code for Holberton School students.
 *@s: pointer
 *
 * Return: none
 */
void print_rev(char *s)
{
	int i;
	int f;

	f = _strlen(s);
	for (i = f - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
