#include <stdlib.h>
/**
 * _calloc - allocates memory for an array.
 *@nmemb: unsigned int
 *@size: unsigned int
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;
	unsigned int buff = nmemb * size;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	p = malloc(buff);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < buff; i++)
	{
		p[i] = 0;
	}
	return (p);

}
