#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node 
 *
 * @head: head of the list
 * @index: index of new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head_1;
	dlistint_t *head_2;
	unsigned int x;

	head_1 = *head;

	if (head_1 != NULL)
		while (head_1->prev != NULL)
			head_1 = head_1->prev;

	x = 0;

	while (head_1 != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = head_1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head_2->next = head_1->next;

				if (head_1->next != NULL)
					head_1->next->prev = head_2;
			}

			free(head_1);
			return (1);
		}
		head_2 = head_1;
		head_1 = head_1->next;
		x++;
	}

	return (-1);
}
