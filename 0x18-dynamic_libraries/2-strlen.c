#include "main.h"

/**
  * _strlen - Calculates the length of a string
  * @s: String to calculate the length.
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int Length = 0;

	for (; *s != '\0'; s++)
	{
		Length++;
	}

	return (Length);
}
