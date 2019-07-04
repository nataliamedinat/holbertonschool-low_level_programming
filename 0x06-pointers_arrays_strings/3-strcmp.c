#include "holberton.h"
/**
 * _strcmp - check the code for Holberton School students.
 *@s1: pointer
 *@s2: pointer
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

		for (i = 0; s1[i] != '\0'; i++) /* recorre s1*/
	{
		if (s1[i] < s2[i]) /*Si s1 es menor que s2*/
		{
			return (s1[i] - s2[i]); /*Retorne la diferencia de ambos*/
		}
		if (s1[i] > s2[i])
		/*s1 en posicion de i es mayor que s2 en posicion de i*/
			{
			return (s1[i] - s2[i]); /* retorne la diferencia de ambos*/
			}
	}
	return (0);
}
