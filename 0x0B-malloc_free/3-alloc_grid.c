#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2dimensional arrray of int
 *@width: colums
 *@height: filas
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
int **p;
int j, i, k;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)

		*(p + i) = malloc(sizeof(int) * width);
		if(*(p + i)== NULL)
	
	{
		for (j = i; j >= 0; j--)
		{
		free(*(p + j));
		}
		free(p);
	}
	for (k = 0; k < height; k++)
	for (j = 0; j < width; j++)
		p[i][j] = 0;

		return (p);

}
