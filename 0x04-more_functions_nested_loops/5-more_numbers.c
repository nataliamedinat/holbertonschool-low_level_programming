#include "holberton.h"
/**
 * more_numbers - Entry point
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int i;
int c;
int first;
int last;
	c = 0;
	while (c < 10)
	{
	for (i = 0; i < 15; i++)
	{
	first = i;
	if (i > 9)
	{
	first = i / 10;
	last = i % 10;
	}
	_putchar(first + '0');
	if (i > 9)
		_putchar(last + '0');
	}
	_putchar('\n');
	c++;
	}
}
