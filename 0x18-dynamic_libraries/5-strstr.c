#include "main.h"
/**
 * _strstr - prints the consecutive caracters of s1 that are in s2.
 * @haystack: source string
 * @needle: searching string
 *
 * Return: new string.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
/**
 *coincidence - define if the string y is inside x.
 * @x: source string
 * @y: string to be searched
 *
 * Return: 1 if there is coincidence, otherwise 0.
 */

int coincidence(char *x, char *y)
{
	while (*y && *y == *x)
	{
		y++;
		x++;
	}
	if (*y == '\0')
		return (1);
	else
		return (0);
}

