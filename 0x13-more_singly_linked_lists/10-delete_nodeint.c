#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a specified index.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted (starting at 0).
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *new_node = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = new_node->next;
		free(new_node);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (count == index)
		{
			new_node = temp->next;
			temp->next = new_node->next;
			free(new_node);
			return (1);
		}

		temp = temp->next;
		count++;
	}

	return (-1);
}
