#include "holberton.h"
/**
 * get_endianness - finds whether the machine is big or little endian
 * Return: 1 if little endian, 0 if big endian
 **/
int get_endianness(void)
{
	unsigned int num = 1;
	char *a = (char *)&num;

	if (*a)
		return (1);
	else
		return (0);


}
