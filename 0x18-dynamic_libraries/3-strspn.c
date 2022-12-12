#include "main.h"

/**
 * _strspn - prints the consecutive caracters of s that are in accept.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, ns;

	for (ns = 0; *(s + ns); ns++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + ns) == *(accept + i))
				break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (ns);
}
