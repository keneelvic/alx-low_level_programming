#include "main.h"

/**
 *  main - this program prints putchar
 *
 *  Return: Always 0
 */
int main(void)
{
	int i;
	char s[] = "_putchar\n";
	int c;

	for (i = 0; i < 9; i++)
	{
		c = s[i];
		_putchar(c);
	}
	return (0);
}
