#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *Description: multiplies two numbers
 *@argc: amount of arguments passed through the program
 *@argv: pointer that contains the arrays of the arguments
 *
 *Return: 0 and result when successful, 1
 * and Error when parameters not met
 *
 */
int main(int argc, char *argv[])
{
	int i, mul, k;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
