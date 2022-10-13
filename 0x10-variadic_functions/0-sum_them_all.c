#include "variadic_functions.h"
#include "stdarg.h"
/**
 * sum_them_all - sum of variadic variable
 * @n:const
 * Return:int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	double sum = 0;

	if (n)
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);
		return (sum);
	}
	else
	{
		return (0);
	}
	return (0);
}
