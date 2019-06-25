#include "holberton.h"
/**
 *  _islower - Entry point
 * @c: character lower
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
char lower;
int i = 0;
	lower = 'a';

	while  (lower <= 'z')
	{
		if (lower == c)
			i = 1;
		lower++;
	}
	return (i);
}

