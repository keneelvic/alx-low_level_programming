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
	int i = 0, j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];

	return (dest);
}
