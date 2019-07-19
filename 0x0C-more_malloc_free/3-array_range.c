#include <stdlib.h>
/**
 * array_range - function that creates an array of int
 *@min: min value of the array
 *@max: max value of the array
 * Return: pointer.
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
	return (NULL);
	}

	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
	{
	return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);


}
