#include "lists.h"

/**
 * dlistint_len - returns elements lenght
 *
 * @h: head of the linked list
 * Return: no of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
