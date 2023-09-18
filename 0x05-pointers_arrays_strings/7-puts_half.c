#include "main.h"

/**
 * print_second_half - Prints the second half of a string.
 * @str: The string to print the second half of.
 *
 * Return: void.
 */
void print_second_half(char *str)
{
    int length = 0;
    int start;

    /* Calculate the length of the string */
    while (str[length] != '\0')
    {
        length++;
    }

    start = (length + 1) / 2;

    while (str[start] != '\0')
    {
        _putchar(str[start]);
        start++;
    }

    _putchar('\n');
}
