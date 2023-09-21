#include "main.h"

/**
 * _strncat - Concatenate two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of characters to concatenate.
 *
 * Return: A pointer to the resulting string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
