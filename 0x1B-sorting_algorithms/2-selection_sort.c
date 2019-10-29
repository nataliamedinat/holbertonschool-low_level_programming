#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *@array: Pointer to the array
 *@size: Size of the array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{

	unsigned int i, j, min_index;
	int min_num;

	if (!size)
		return;

	for (i = 0; i < size; i++)
	{
		min_num = array[i];
		min_index = i;

		for (j = i + 1; j < size; j++)
		{
			if (min_num > array[j])
			{
				min_index = j;
				min_num = array[j];
			}
		}
		if (min_index != i)
		{
			array[min_index] = array[i];
			array[i] = min_num;
			print_array(array, size);
		}
	}
}
