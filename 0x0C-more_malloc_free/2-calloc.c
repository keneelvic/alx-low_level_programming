#include "main.h"
#include <stdlib.h>
/**
* _calloc - prints calloc;
* @nmemb: input string.
* @size: input string.
* Return: Pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int index, d;

	d = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(d);
	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < (d); index++)
	{
		ptr[index] = 0;
	}
	return (ptr);
}
