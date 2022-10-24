#include "lists.h"
/**
 *print_listint - print list
 *Return: size_t
 *@h: list
 */
size_t print_listint(const listint_t *h)
{
	int nodes;

	for (nodes = 0; h; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
