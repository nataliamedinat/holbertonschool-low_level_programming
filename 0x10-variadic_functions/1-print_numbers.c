#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers..
 *@separator: string to be printed
 *@n: number of int passed to the func
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list pri;



	va_start(pri, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pri, int));
		if (separator != NULL && i < (n - 1))
		{
		printf("%s", separator);
		}
	}
		printf("\n");
		va_end(pri);


}
