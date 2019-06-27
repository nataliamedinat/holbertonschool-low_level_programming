#include "holberton.h"
/**
 *  _isupper - Entry point
 * @c: character upper
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	char upper;
	int i = 0;
upper = 'A';
	while  (upper <= 'Z')
	{
	if (upper == c)
		i = 1;
		upper++;
	}
	return (i);
}
