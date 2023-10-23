#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list, even with a loop.
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t *head, *temp;
	long diff;

	if (!h)
		return (0);
	head = *h;
	*h = NULL;
	while (head)
	{
		node_count++;
		diff = head->next - head;
		temp = head;
		free(temp);
		if (diff >= 0)
			break;
		head = head->next;
	}
	return (node_count);
}
