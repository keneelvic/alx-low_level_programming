#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it
 * @argc: holds no of arguments from 0 to null
 * @argv: prints the arrays of arguments
 *
 * Return: always 0
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
