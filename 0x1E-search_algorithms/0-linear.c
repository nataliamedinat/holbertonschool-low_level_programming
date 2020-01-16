#include "search_algos.h"
/**
 * linear_search - Searcheas for a value in array of int using linear search
 *@array: Pointer to the first element of the arrat
 *@size: Number of elements in array
 *@value: Value to search
 * Return: First index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int i;
	int size_ = size;

	if (array == NULL)
		return (-1);


	for (i = 0; i < size_; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);



}
