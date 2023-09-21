#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to concatenate.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int j = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[dest_len] = src[j];
		dest_len++;
		j++;
	}

	dest[dest_len] = '\0';

	return dest;
}
