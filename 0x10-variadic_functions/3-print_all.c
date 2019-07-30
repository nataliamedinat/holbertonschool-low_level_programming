#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
*print_all - print anything
*@format: formato
**/
void print_all(const char * const format, ...)
{
	va_list lis;
	char *p;
	int l = 0;

	va_start(lis, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[l] != '\0')
	{
		switch (format[l])
		{
			case 'c':
				printf("%c", (char) va_arg(lis, int));
				break;
			case 'i':
				printf("%d", va_arg(lis, int));
				break;
			case 'f':
				printf("%f", va_arg(lis, double));
				break;
			case 's':
				p = va_arg(lis, char *);
				if (p != NULL)
				{
					printf("%s", p);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[l] == 'c' || format[l] == 'i' || format[l] == 'f' ||
			format[l] == 's') && format[l + 1] != '\0')
			printf(", ");
		l++;
	}
	va_end(lis);
	printf("\n");
}
