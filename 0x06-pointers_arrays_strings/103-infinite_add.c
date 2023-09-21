#include "main.h"

/**
 * rev_string - Reverses a string.
 * @n: The string to reverse.
 *
 * Return: void
 */
void rev_string(char *n)
{
    int i = 0;
    int j = 0;
    char temp;

    while (*(n + i) != '\0')
    {
        i++;
    }
    i--;

    for (j = 0; j < i; j++, i--)
    {
        temp = *(n + j);
        *(n + j) = *(n + i);
        *(n + i) = temp;
    }
}

/**
 * add_digits - Adds two digits.
 * @val1: The first digit.
 * @val2: The second digit.
 * @overflow: Pointer to the overflow flag.
 *
 * Return: The result of the addition (0-18).
 */
int add_digits(int val1, int val2, int *overflow)
{
    int temp_tot = val1 + val2 + *overflow;
    *overflow = temp_tot / 10;
    return temp_tot % 10;
}

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: Pointer to the buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int overflow = 0, i = 0, j = 0, digits = 0;
    int val1 = 0, val2 = 0;

    while (*(n1 + i) != '\0')
        i++;
    while (*(n2 + j) != '\0')
        j++;
    i--;
    j--;

    if (j >= size_r || i >= size_r)
        return (0);

    while (j >= 0 || i >= 0 || overflow == 1)
    {
        val1 = (i >= 0) ? *(n1 + i) - '0' : 0;
        val2 = (j >= 0) ? *(n2 + j) - '0' : 0;

        if (digits >= (size_r - 1))
            return (0);

        r[digits] = add_digits(val1, val2, &overflow) + '0';
        digits++;
        j--;
        i--;
    }

    if (digits == size_r)
        return (0);

    r[digits] = '\0';
    rev_string(r);
    return (r);
}
