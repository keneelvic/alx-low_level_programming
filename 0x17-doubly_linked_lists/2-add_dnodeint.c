#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint- Insert new node at the beginnig
 * @head: Is the pointer to the direction of the head
 * @n:The data integer
 * Return: The new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element;

	new_element = malloc(sizeof(dlistint_t));

	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = (*head);
	new_element->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_element;
	}
	(*head) = new_element;

	return (new_element);
}
