#include "main.h"

/**
 * print_triangle - Prints a right-angled triangle in the terminal.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        int i, j;

        for (i = 1; i <= size; i++)
        {
            for (j = 1; j <= i; j++)
            {
                _putchar(35); // ASCII representation of '#'
            }
            _putchar('\n');
        }
    }
}
