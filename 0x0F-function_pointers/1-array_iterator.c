#include <stdio.h>
/**
 * array_iterator - executes a function on each element ofan array
 * @array: int array
 * @size: size of the array
 *@action: pointer to the function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
		 unsigned int a;

	if (action != NULL && array != NULL)
		for (a = 0; a < size; a++)
			action(array[a]);


}
