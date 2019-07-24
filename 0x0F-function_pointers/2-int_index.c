#include <stdio.h>
/**
 * int_index - funcction that search for an int
 *@cmp: pointer to compare values
 *@size: number of elements
 *@array: int array
 * Return: Always 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	 int a;

	if (cmp == NULL || array == NULL || size <= 0)
		return (-1);

	for (a = 0; a < size; a++)
	{
	if (cmp(array[a]) != 0) /* match */
		return (a);
	}

	return (-1);


}
