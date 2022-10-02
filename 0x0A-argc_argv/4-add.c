#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *
 *@argc: amount of arguments passed through the program
 *@argv: pointer that contains the arrays of the arguments
 *
 *Return: the sum of the numbers, if no
 *number is passed then print 0, if a
 *number has symbols that are not digit then print Error and return 1
 *
 */
int main(int argc, char *argv[])
{
	int i, k, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (k = 0; argv[i][k] != 0; k++)
			{
				if (argv[i][k] > 58 || argv[i][k] < 47)
				{
					printf("Error\n");
					return (1);
				}

			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
