#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int j, k;

	for (j = 0; j < 9; j++)
	{
		for (k = j + 1; k < 10; k++)
		{
			putchar((j % 10) + '0');
			putchar((k % 10) + '0');

			if (j == 8 && k == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
