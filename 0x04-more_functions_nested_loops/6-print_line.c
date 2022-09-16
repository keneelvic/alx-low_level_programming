#include "main.h"

/**
 * print_line - prints a straight line based on the number u input
 *@n: determines the length of the underscore represented with numbers
 *
 * _putchar: used 3 times
 */

void print_line(int n)
{
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l < n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
