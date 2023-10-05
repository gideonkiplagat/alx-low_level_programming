#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - function to allocates new memory
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 * Return: return pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count < nmemb * size)
	{
		ptr[count] = 0;
		count++;
	}
	return (ptr);
}
