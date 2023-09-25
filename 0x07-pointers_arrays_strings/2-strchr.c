#include "main.h"

/**
 * _strchr - Locate a character in a string.
 * @s: The source string to search.
 * @c: The character to find.
 *
 * Return: A pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
    int len = 0;
    int i;

    while (s[len])
    {
        len++;
    }

    for (i = 0; i <= len; i++)
    {
        if (c == s[i])
        {
            s += i;
            return (s);
        }
    }

    return ('\0');
}
