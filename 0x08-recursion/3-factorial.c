#include "holberton.h"
/**
 * factorial - Function that returns the factorial of a given number
 *@n: int vaue
 *
 * Return: factorial to n
 *-1 to indicate an error.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

		return (n * factorial(n - 1));


}
