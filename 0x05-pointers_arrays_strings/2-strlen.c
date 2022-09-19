#include "main.h"

/**
 * _strlen - function that prints the length of a string
 *
 * @s: a pointer that points to char str
 *
 * Return: variable countl is being returned
 */
int _strlen(char *s)
{
	int count_l = 0;

	while (*s != '\0')
	{
		count_l++;
		s++;
	}
	return (count_l);
}
