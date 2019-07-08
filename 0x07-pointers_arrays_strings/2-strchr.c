#include "holberton.h"
/**
 * _strchr - locates a character in a string
 *@s: pointer
 *@c: pointer
 *
 * Return: two returns
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0') /*recorre el string*/
	{
		if (*s == c)
		{
			return (s);  /*return a s*/
		}
			s++;
	}

		if (*s == c)  /*si en pointers hay un c*/
		{
			return (s); /* return*/
		}

		else
		{
			return ('\0'); /*return NULL*/
		}
}
