#include "holberton.h"
/**
 * _isalpha - Entry point
 * @c: character alpha upper
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{

	int alpha = 'a';
	int upper = 'A';
	int i = 0;

	while (alpha <= 'z')
	{
		if (alpha == c)
			i = 1;
		alpha++;
	}
	while (upper <= 'Z')
	{
		if (upper == c)
			i = 1;
		upper++;
	}

		return (i);
}
