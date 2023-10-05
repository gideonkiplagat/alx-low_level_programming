#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
  * _abs - get absolute value
  * @n: number to calculate
  * Return: absolute value of the number
  */
int _abs(int n)
{
	n < 0 ? (n *= -1) : (n = n);
	return (n);
}
/**
  * array_range - creates an array of integers
  * @min: The minimum value
  * @max: The maximum value
  * Return: pointer to array of integers or NULL.
  */
int *array_range(int min, int max)
{
	int *ptr;
	int range, i;

	if (min > max)
		return (NULL);
	range = max - min + 1;
	ptr = malloc(range * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < range; min++, i++)
		ptr[i] = min;
	return (ptr);
}
