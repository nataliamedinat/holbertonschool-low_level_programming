#include "holberton.h"
/**
 * _strlen_recursion - Function that returns the lenght of a string
 *@s: pointer
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
		return (1 + _strlen_recursion(s));
}
