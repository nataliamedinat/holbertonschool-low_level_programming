#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *@array: Pointer to the array
 *@size: Size of the array
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{

	unsigned int i, j, k, flag, min, tmp, flag_chg = 0;

	if (size < 2)
	return;

	for (i = 0; i < size; i++)
	{
		min = i;
		flag_chg = 0;
		flag = 0;
	for (j = i + 1; j < size; j++)
	{
		if (array[j] < array[min])
		{
			flag_chg = 1;
			min = j;
		}
	}

	tmp = array[i];
	array[i] = array[min];
	array[min] = tmp;

	for (k = 0; k < size; k++)
	{
		if (array[k] > array[k + 1])
		flag = 1;
	}
		if (flag == 1 && flag_chg == 1)
		print_array(array, size);
	}
	print_array(array, size);
}
