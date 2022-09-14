#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hr, min, hfd, hsd, mfd, msd;

	for (hr = 0; hr < 24; hr++)
{
	hfd = hr / 10;
	hsd = hr % 10;

	for (min = 0; min < 60; min++)
{
	mfd = min / 10;
	msd = min % 10;

	_putchar('0' + hfd);
	_putchar('0' + hsd);
	_putchar(':');
	_putchar('0' + mfd);
	_putchar('0' + msd);
	_putchar('\n');
}

}

}
