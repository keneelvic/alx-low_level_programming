#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int x = 0, y = 0;
	char str[400];

	while (*(s + x))
	{
		*(str + x) = *(s + x);
		x++;
	}
	x -= 1;
	while (x >= 0)
	{
		*(s + x) = *(str + y);
		y++;
		x--;
	}
}
