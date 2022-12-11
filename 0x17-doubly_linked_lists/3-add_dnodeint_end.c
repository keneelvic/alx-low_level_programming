#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - Add a node in the tail
 * @head: Pointer to direction of the head
 * @n: The data integer
 * Return: The direction of the tail node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element, *temp;

	new_element = malloc(sizeof(dlistint_t));

	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->next = NULL;

	if (*head == NULL)
	{
		new_element->prev = NULL;
		*head = new_element;
		return (new_element);
	}
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_element;
	new_element->prev = temp;

	return (new_element);
}
