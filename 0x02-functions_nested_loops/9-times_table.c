#include "main.h"

/**
 * times_table - prints the times table up to 9
 *
 * Return: void
 */
void times_table(void)
{
	int fml, sml, gml, fd, sd;

	for (fml = 0, fml < 10; fml++)
{
	for (sml = 0; sml < 10; sml++)
{
	gml = fml * sml;
	fd = gml / 10;
	sd = gml % 10;

	if (sml == 0)
{
	_putchar('0');
} else if (gml < 10)
{
	_putchar(' ');
	_putchar('0' + sd);
} else
{
	_putchar('0' + fd);
	_putchar('0' + sd);
}
	if (sml < 9)
{
	_putchar(',');
	_putchar(' ');
} else 
{
	_putchar('\n');
}

}

}

}
