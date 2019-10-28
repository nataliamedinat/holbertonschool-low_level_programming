#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 *@array: Pointer to the array
 *@size: Size of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	int tmp;


	for (i = 0; i < size - 1;)
	{
		if (array[i] > array[i + 1])
	{
		tmp = array[i];
		array[i] = array[i + 1];
		array[i + 1] = tmp;
		print_array(array, size);
		i = 0;
		continue;
	}
	i++;
	}

}
