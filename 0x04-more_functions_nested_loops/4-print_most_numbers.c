#include "main.h"

/**
 *print_most_numbers - prints all numbers except 2 and 4
 *
 *_putchar: prints the numbers to stdout
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i != 2) && (i != 4))

		_putchar(i + '0');

	}
	_putchar('\n');
}
