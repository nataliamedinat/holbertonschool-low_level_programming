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
/**
 * flip_bits - return the number of bits you would need to flip
 *@n: list to print
 *@m:index to return
 * Return: number of bits..
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	int j = 0, k;

	k = sizeof(unsigned long int) * 8;

	for (j =  k - 1; j >= 0; j--)
	{
		if (get_bit(n, j) ^ get_bit(m, j))
			flip += 1;
	}
	return (flip);

}
