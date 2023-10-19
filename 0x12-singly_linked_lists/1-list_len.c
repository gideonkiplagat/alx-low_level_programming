#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - Show the total count of elements.
  * @h: A linked list
  *
  * Return: The counts.
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
