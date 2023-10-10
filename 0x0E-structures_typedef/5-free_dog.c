#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - frees dogs.
  * @d: Owner of the dog.
  *
  * Return: Void.
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
