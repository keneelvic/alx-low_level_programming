#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *_strdup - create a new array containing a copy of the given string
 *@str: a pointer to the string to copy
 *
 *Return: NULL if str is NULL or if memory allocation fails,
 *otherwise a return a pointer to the new copy
 */
char *_strdup(char *str)
{
	char *newstrn = NULL;
	unsigned int i;
	int en;

	if (str == NULL)
		return (NULL);

	for (en = 0; str[en] != '\0'; en++)
		;
	newstrn = (char *) malloc(en + 1 * sizeof(char));
	if (newstrn != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			newstrn[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	newstrn[i] = '\0';
	return (newstrn);
}
