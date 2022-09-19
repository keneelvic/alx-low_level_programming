#include "main.h"

int _strlen(char *s)
{
	int count_l = 0;

	while (*s != '\0')
	{
		count_l++;
		s++;
	}
	return count_l;
}
