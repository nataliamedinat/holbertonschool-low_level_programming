#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order
 *@array: Pointer to the array
 *@size: Size of the array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{

	unsigned int i, j, min, tmp;

	if (size < 2)
	return;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
	{
			if (array[j] < array[min])
			min = j;
	}

	tmp = array[i];
	array[i] = array[min];
	array[min] = tmp;
	print_array(array, size);
	}
}


