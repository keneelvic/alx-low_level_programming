#include "main.h"

/**
 * _isupper - checks if a character is upper case
 * @c: is represnting the character
 *
 * Return: 0 if it is lower and 1 if it is upper.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
