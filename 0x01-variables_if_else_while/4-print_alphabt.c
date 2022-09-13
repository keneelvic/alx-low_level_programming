#include <stdio.h>

/**
 * main- prints only lowcase and new line
 *
 * Return: Always 0
 */
int main(void)
{
	int lowCase;

	for (lowCase = 'a'; lowCase <= 'z'; lowCase++)
{
	if (lowCase != 'e' && lowCase != 'q')
{
	putchar(lowCase);
}
}
	putchar('\n');

	return (0);
}
