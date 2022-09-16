#include "main.h"

/**
 *print_square - this program prints a square with the hash tag
 *@size: represents the number of hash tags to be printed
 *
 * _putchar: used only 3
 */
void print_square(int size)
{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= size; x++)
		{
			_putchar('#');
			for (y = 2; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
