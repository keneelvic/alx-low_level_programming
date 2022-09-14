#include "main.h"


/**
 * print_alphabet_x10 - entry point
 *
 * Description: Prints the alphabet with _putchar ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int num, alpha;

	for (num = 0; num <= 10; num++)
{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	_putchar(alpha);
}
	_putchar('\n');
}
}

