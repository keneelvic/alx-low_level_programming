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
	char *dupl;
	int i, length;

	dupl = (char *) malloc(sizeof(str));

	i = length = 0;
	while (str[i] != '\0')
	{
		length++;
			i++;
	}
	if (dupl == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		dupl[i] = str[i];
		i++;
	}
	return (dupl);

}
