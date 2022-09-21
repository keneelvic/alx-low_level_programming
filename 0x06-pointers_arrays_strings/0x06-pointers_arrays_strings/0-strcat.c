#include "main.h"

/**
 *  _strcat -> this function concats two strings
 * @dest: 1st para which
 * @src: the 2nd para is being appended to
 *
 * Return: would return a pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = 0;

	return (dest);
}
