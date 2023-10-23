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
	listint_t *killnode;
	listint_t *current;
	listadd_t *headadd;
	listadd_t *checker;
	size_t count;

	count = 0;
	current = *h;
	headadd = NULL;
	if (h != NULL)
	{
		while (current != NULL)
		{
			checker = headadd;
			while (checker != NULL)
			{
				if (current == checker->address)
				{
					free(current);
					free_listadd(headadd);
					/*headadd = NULL;*/
					 *h = NULL;
					return (count);
				}
				checker = checker->next;
			}
			killnode = current;
			if (add_nodeaddress(&headadd, current) == NULL)
			{
				free_listadd(headadd);
				exit(98);
			}
			current = current->next;
			free(killnode);
			count++;
		}
		free_listadd(headadd);
		*h = NULL;
	}
	return (count);
}
