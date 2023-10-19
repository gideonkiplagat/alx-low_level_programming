#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	if (str != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head  = new_node;
			return (*head);
		}
		else
		{
			current = *head;
			while (current->next)
				current = current->next;

			current->next = new_node;
			return (current);
		}
	}

	return (NULL);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int i = 0;

	while (*s)
	{
		s++;
		i++;
	}

	return (i);
}
