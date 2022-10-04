#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *create_array - a function that
 * creates an array of chars, and initiali *zes it with a specific
 *@size: size of the array
 *@c: with which the array should be initialized
 *
 * Return: NULL if size=0 else 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *) malloc(size * sizeof(char));

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}
	return (array);
}
