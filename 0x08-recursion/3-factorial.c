#include "main.h"

/**
  * factorial - Returns the factorial of a number
  * @n: the number to calculate the factorial of.
  *
  * Return: integer value, or -1 if n is negative.
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
