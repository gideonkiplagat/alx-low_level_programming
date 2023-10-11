#include "function_pointers.h"

/**
 * array_iterator - execute a function pointer on each element of an array
 * @array: The array to iterate over.
 * @size: The size of the array.
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
