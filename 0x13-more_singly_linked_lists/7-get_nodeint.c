#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node, starting at 0.
 *
 * Return: The nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position = 0;

	if (head)
	{
		while (head)
		{
			if (position == index)
				return (head);

			head = head->next;
			position++;
		}
	}

	return (NULL);
}
