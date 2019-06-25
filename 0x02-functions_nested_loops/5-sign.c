#include "holberton.h"
/**
 * print_sign - Entry point
 *@n: value number
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{

	int num;
		if (n > 0)
		{
			num = 1;
			_putchar('+');
		}
		if (n < 0)
		{
			num = -1;
			_putchar('-');
		}
		if (n == 0)
		{
			num = 0;
			_putchar('0');
		}
		return (num);
}
