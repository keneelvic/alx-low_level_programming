#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *argstostr - concatenates all the arguments of your program
 *@ac: number of arguments
 *@av: arguments
 *Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int ai, je, ke, ext;
	char *ptr = NULL;

	ke = 0;
	ext = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (ai = 0; ai < ac; ai++)
	{
		for (je = 0; av[ai][je] != '\0'; je++)
		{
			ext++;
		}
	}
	ptr = (char *) malloc(ext + ac + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (ai = 0; ai < ac; ai++)
	{
		for (je = 0; av[ai][je] != '\0'; je++)
		{
			ptr[ke] = av[ai][je];
			ke++;
		}
		ptr[ke] = '\n';
		ke++;
	}
	ptr[ke] = '\0';
	return (ptr);
}
