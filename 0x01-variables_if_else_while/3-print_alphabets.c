#include <stdio.h>

/**
 * main-entry point and  prints lower and uppercase letters
 *
 * Return: Always 0
 */
int main(void)
{
	int Alpha_1;
	int Alpha_2;

	for (Alpha_1 = 'a'; Alpha_1 <= 'z'; Alpha_1++)
{
	putchar(Alpha_1);
}
	for (Alpha_2 = 'A'; Alpha_2 <= 'Z'; Alpha_2++)
{
	putchar(Alpha_2);
}
	putchar('\n');

	return (0);
}
