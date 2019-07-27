#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 *@separator: string
 *@n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *p;
	va_list stri;

		va_start(stri, n);
		while (i < n)
		{
			p = va_arg(stri, char *);
			if (p != NULL)
				printf("%s", p);
			else
				printf("(nil)");
			if (separator != NULL && i != (n - 1)
				printf("%s", separator);
			i++;
		}
		printf("\n");
		va_end(stri);

}
