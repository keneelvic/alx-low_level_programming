#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int x, y = 0;

	while (*(str + y))
		y++;
	x = y / 2;
	if (y % 2)
		x += 1;
	while (x < y)
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
