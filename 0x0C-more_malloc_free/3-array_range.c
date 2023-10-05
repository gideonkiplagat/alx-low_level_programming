#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * array_range - Create array of integers from min - max.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: Pointer to new array, NULL if failed
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size, n;

	if (min > max)
		return (NULL);
	size = max - min;
	arr = malloc((size + 1) * sizeof(int));
	i = 0;
	n = min;
	while (n <= max)
	{
		arr[i] = n;
		i++;
		n++;
	}
	return (arr);
}
