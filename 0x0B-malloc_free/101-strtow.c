#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *strtow - concatenates all the arguments of your program
 *@str: string
 *@av: arguments
 *Return: a pointer to a new string
 */
char **strtow(char *str)
{
	int ai, w, je, ke, counts, em, words;
	char **ptr;
	char *ex;

	w = 0;
	je = 0;
	ai = 0;
	counts = 0;

	if (*str == '\0' || str == NULL)
		return (NULL);

	for (ai = 0; str[ai] != '\0'; ai++)
	{
		if (str[ai] == ' ' && (str[ai + 1] != ' ' || str[ai + 1] == '\0'))
			w++;
	}
	ptr = (char **) malloc((w + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);

	for (words = 0; str[words] && je <= w; words++)
	{
		counts = 0;
		if (str[words] != ' ')
		{
			for (ai = words ; str[ai] != '\0'; ai++)
			{
				if (str[ai] == ' ')
					break;
				counts++;
			}
			ptr[je] = (char *) malloc((counts + 1) * sizeof(char));
			if (ptr[je] == NULL)
			{
				for (ke = 0; ke <= je; ke++)
				{
					ex = ptr[ke];
					free(ex);
				}
				free(ptr);
				return (NULL);
			}
			for (em = 0; words < ai; words++)
			{
				ptr[je][em] = str[words];
				em++;
			}
			ptr[je][em] = '\0';
			je++;
		}
	}
	ptr[je] = NULL;
	return (ptr);
}
