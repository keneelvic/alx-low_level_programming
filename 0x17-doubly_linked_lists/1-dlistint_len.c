#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - Return number of elements in dll
 * @h: Pointer to struct of ddl
 * Return: The amount of elements in dll
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
