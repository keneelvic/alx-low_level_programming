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
	char *dst = malloc(strlen(str) + 1);

	if (dst == NULL && str == NULL)

		return (NULL);

	strcpy(dst, str);

	return (dst);
}
