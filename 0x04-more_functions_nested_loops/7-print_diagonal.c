#include "main.h"

/**
 *print_diagonal - prints a slant line diagonally
 *@n: represents the number which represents the line
 *
 * _putchar: used 3 times
 */

void print_diagonal(int n)
{
	int d;
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n; c++)
		{

			for (d = 1; d < c; d++)
			{
				_putchar(' ');

			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
