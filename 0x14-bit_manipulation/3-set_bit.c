#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1
 *@n: any number
 *@index: index starting from 0 of the bit i want to set
 * Return: 1 on succes. -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	set = 1 << index;/*para movernos*/
	*n = *n | set; /*para dejarlo igual*/
		return (1);

}
