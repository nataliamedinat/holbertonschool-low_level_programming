#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0
 *@n: any number
 *@index: index starting from 0
 * Return: 1 on succes or -1 if an error ocurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clear;

		if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	clear = ~(1 << index); /*movernos negandolo*/
	*n = *n & clear; /*para dejarlo igual al primero*/
		return (1);

}
