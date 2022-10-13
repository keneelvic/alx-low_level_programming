#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print variadic number
 * @separator: char
 * @n:variadic variable count
 * Return :void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int in;

	va_start(ap, n);
	for (in = 0; in < n; in++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && in < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
