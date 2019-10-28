#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 *@array: Pointer to the array
 *@size: Size of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int tmp;
	bool swap;

	if (!size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swap = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				swap = true;
			}
		}
		if (swap == false)
		break;
	}
}
