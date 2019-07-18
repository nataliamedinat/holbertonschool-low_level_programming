#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory
 *@b: unsigned int
 * Return: exit
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == 0)
		exit(98);
	return (p);
}
