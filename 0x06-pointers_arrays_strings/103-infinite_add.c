#include "main.h"

/**
 * reverse_string - Reverses a string in place.
 * @str: The string to reverse.
 */
void reverse_string(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    int start = 0;
    int end = length - 1;
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

/**
 * add_numbers - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @result: Buffer to store the result.
 * @size_result: The size of the result buffer.
 *
 * Return: 0 if buffer is too small, 1 otherwise.
 */
int add_numbers(char *n1, char *n2, char *result, int size_result)

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: Pointer to the buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result in the buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int result_size = size_r;

    if (add_numbers(n1, n2, r, result_size) == 0)
    {
        return (0);
    }

    reverse_string(r);

    return r;
}
