#include "holberton.h"
/**
 * _memset - Fills  the memory with a constant byte
 *@s: pointer to char
 *@b: char
 *@n: unsigned int
 *
 * Return: Transformed pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	s[i] = b;

		return (s);

}

