#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - Calcualte the lenght of an array
 * @s: The array to be calculated
 *
 * Return: On success a pointer.
 * On error, NULL is returned.
 */
	int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * argstostr - concatenates all arguments in the program
 *@ac: argumnet counter
 *@av: argument value
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	
	char *p;
	int i, j, sum = 0, cont = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		sum += _strlen(*(av + i));

	p = malloc(sizeof(char) * (sum + ac + 1));
	if (p == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (i = 0; i < _strlen(*(av + j)); i++)
		{
			p[cont] = *(*(av + j) + i);
			cont++;
		}
		p[cont] = '\n';
		cont++;
	}
	p[cont] = '\0';
	return (p);
}
