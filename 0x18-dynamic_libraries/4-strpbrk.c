#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - prints the consecutive caracters of s that are in accept/str2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, x;

	for (i = 0; *(s + i); i++)
	{
		for (x = 0; *(accept + x); x++)
		{
			if (*(s + i) == *(accept + x))
			{
				break;
			}
		}
		if (*(accept + x) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
