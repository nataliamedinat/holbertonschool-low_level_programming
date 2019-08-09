#include "holberton.h"
/**
 * get_bit - returns the value of a bit given an index
 *@n: num
 *@index: index
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}
