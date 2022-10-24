#include "lists.h"

/**
 * listint_len - returns the no of elements in list
 * @h: points to beginning  of list
 * Return: no of elements in size_t form
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	if (!h)
		return (0);

	for (nodes = 0; h; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}
