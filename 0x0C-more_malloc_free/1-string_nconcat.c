#include <stdlib.h>
/**
 * _strlen - Calcualte the lenght of an array
 * @s: The array to be calculated
 *
 * Return: On success a pointer.
 * On error, NULL is returned.
 */
unsigned int _strlen(char *s)
{
	unsigned int a;

	a = 0;
	while (s[a] != '\0')
	a++;
	return (a);
}
/**
 * string_nconcat - function that concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes
 *
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a, b;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	if (n >= _strlen(s2))
		n = _strlen(s2);

	p = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (p == NULL)
	{
	return (NULL);
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		p[a] = s1[a];
	}
	for (b = 0; b < n; b++)
	{
		p[a] = s2[b];
		a++;
	}
	p[a] = '\0';
	return (p);

}
