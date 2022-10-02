#include <stdio.h>
/**
 *main -  prints all arguments it receives.
 *@argc: prints no of arguments
 *@argv: prints names of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
