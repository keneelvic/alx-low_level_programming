#include "main.h"

/**
 * print_line - puts line to stdout
 *@n: is the number that specifies the line
 *
 * _putchar: used three times and outputs to standard output
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
		for (l = 1; l <= n; l++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
