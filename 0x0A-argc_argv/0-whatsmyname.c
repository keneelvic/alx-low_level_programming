#include <stdio.h>
/**
 *main - program that prints its name followed by a new line
 *@argc: holds the no of command line arguments
 *@argv: holds array of command line arguments
 * around the the executable
 *
 * Return: always 0
 */
int main(int __attribute__ ((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
