#include <stdio.h>
#include <stdlib.h>

/**
 * main - this program prints the name of the file
 * it is compiled in that is the source code
 *
 * exit: EXIT_SUCCESS
 * Return: Always 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	exit(EXIT_SUCCESS);
}
