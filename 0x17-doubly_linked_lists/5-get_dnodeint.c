#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node linked list
 *
 * @head: head of the list
 * @index: index of the nth node of list
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	x = 0;

	while (head != NULL)
	{
		if (x == index)
			break;
		head = head->next;
		x++;
	}

	return (head);
}
