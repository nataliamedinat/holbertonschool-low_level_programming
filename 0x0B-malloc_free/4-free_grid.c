#include <stdlib.h>
/**
  * free_grid - Frees a grid
  * @grid: grid
  * @height: height of the array
  *
  * Return: on success 1
  */
void free_grid(int **grid, int height)
{
int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);




}
