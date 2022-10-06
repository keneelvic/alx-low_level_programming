#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concats n bytes of strings
 * @s1: string1
 * @s2: string2
 * @n: bytes of s2
 *
 * Return: NULL if function fails
 *otherwise return pointer which points
 *to new space allocated in mem which contains
 *s1, n and '\0'.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int dest_len, index, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (dest_len = 0; s1[dest_len]; dest_len++)

	ptr = malloc(sizeof(*ptr) * dest_len + n + 1);

	if (ptr == NULL)
		return (NULL);

	index = 0;
	j = 0;

	while (index < (dest_len + n))
	{
		if (index < dest_len)
		{
			ptr[index] = s1[index];
		}
		else
		{
			ptr[index] = s2[j++];
		}
		index++;
	}
	ptr[index] = '\0';
	return (ptr);

}
