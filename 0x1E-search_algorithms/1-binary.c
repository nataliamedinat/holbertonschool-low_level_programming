#include "search_algos.h"
/**
 * binary_search -  searches for a value in sorted arrayusing binary search
 *@array: Pointer to the first element of the array
 *@value: Value to search for
 *@size: NUmber of elements in array
 * Return: Index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle = 0;
	size_t idx;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		middle = (left + right) / 2;
		printf("Searching in array: ");

		for (idx = left; idx < right; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[right]);

		if (array[middle] == value)
			return (middle);

		if (array[middle] < value)
			left = middle + 1;

		else
			right = middle - 1;
	}
	return (-1);

}
