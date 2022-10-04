#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 * @s1:string1
 * @s2:string 2 be cat to s1
 * Return: pointer should point to a n
 * ewly allocated space in memory
 *or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *newstr = NULL;
	unsigned int i;
	int l1;
	int l2;
	int count;

	count = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	newstr = (char *) malloc((l1 + l2 + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		newstr[i] = s1[i];
	for (; s2[count] != '\0'; i++)
	{
		newstr[i] = s2[count];
		count++;
	}
	return (newstr);
}
