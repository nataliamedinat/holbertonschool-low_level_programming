#include "holberton.h"
/**
 * _strcat - concatenates two strings
 *@dest: value of string
 *@src: value of string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a, j;

	a = 0;
	j = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[j] != '\0')
	{
		dest[a + j] = src[j];
		j++;
	}
		dest[a + j] = 0;
		return (dest);
}
