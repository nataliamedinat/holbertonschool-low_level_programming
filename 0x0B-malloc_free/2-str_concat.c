#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *@s1: pointer to string 1
 *@s2: pointer to string 2
 * Return: *s if the function no fail
 */
char *str_concat(char *s1, char *s2)
{
	int st1 = 0, st2 = 0;
	int a = 0, b = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[st1] != 0)
		st1++;

	while (s2[st2] != '\0')
		st2++;

	s = malloc(sizeof(char) * (st1 + st2 + 1));
	if (s == 0)
	{
		return (NULL);
	}
	while (s1[a] != '\0')
	{
		s[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		s[a + b] = s2[b];
		b++;
	}
	return (s);

}
