#include "holberton.h"

/**
 * rev_string - Reverses a string.
 *@s: pointer.
 */

void rev_string(char *s)
{
int  i;
int  c;
char  cont;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i--;

	for (c = 0; c < i; c++)
	{
	cont = s[i];
	s[i] = s[c];
	s[c] = cont;
	i--;
	}
}
