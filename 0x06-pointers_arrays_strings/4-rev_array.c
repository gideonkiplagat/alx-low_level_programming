#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: An array of integers.
 * @n: Number of elements to swap.
 *
 * Return: No return value (void).
 */
void reverse_array(int *a, int n)
{
	int *ptr, idx, aux, count;

	ptr = a;

	for (idx = 1; idx < n; idx++)
	{
		ptr++;
	}

	for (count = 0; count < idx / 2; count++)
	{
		aux = a[count];
		a[count] = *ptr;
		*ptr = aux;
		ptr--;
	}
}
