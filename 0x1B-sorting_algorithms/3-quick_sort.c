#include "sort.h"
/**
 * lomuto_partition- Lomuto partition scheme
 *@array: Pinter to the array
 *@size: Size of the array
 *@lower: Lower
 *@upper: Upper
 * Return: Nothing
 */

int lomuto_partition(int *array, size_t size, int lower, int upper)
{
	int j;
	int i = lower - 1;
	int pivot = array[upper];

	for (j = lower ; j <= upper - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(array, size, &array[i], &array[j]);
		}
	}
	swap(array, size, &array[i + 1], &array[upper]);
	return (i + 1);
	}

/**
 * swap - Swap two values in
 * @array: Array
 * @size: Size of array
 * @i: Value to swap
 * @j: Value to swap
 *
 * Return: None
 */

void swap(int *array, size_t size, int *i, int *j)
{
	int tmp;

		if (*i != *j)
		{
		tmp = *i;
		*i = *j;
		*j = tmp;
		print_array(array, size);
		}
}

/**
 * fast_sort - Recursion
 *@array: Pointer to the array *@lower: Lowe
 *@upper: Upper
 *@upper: Upper
 *@lower: Lower
 *@size: Size of the array
 * Return: Nothing
 */

void fast_sort(int *array, size_t size, int lower, int upper)
{
	int partition;

	if (!array || !size)
	return;

	if (lower < upper)
	{
		partition = lomuto_partition(array, size, lower, upper);
		fast_sort(array, size, lower, partition - 1);
		fast_sort(array, size, partition + 1, upper);
	}
}

/**
 * quick_sort - Sorts an array of ints in ascending order
 *@array: Pointer to the array
 *@size: Size of the array
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	fast_sort(array, size, 0, (size - 1));
}
