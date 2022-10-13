#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - print opcodes of this function
 * @argc: the size of the argument vector
 * @argv: the argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int b;
	char *nem = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (b--)
		printf("%02x%c", *nem++ & 0xff, b ? ' ' : '\n');
	return (0);
}
