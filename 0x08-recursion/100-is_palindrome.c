#include "main.h"

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - Recursive function to check if a substring is a palindrome.
 * @s: The string to check.
 * @start: The index of the first character to compare.
 * @end: The index of the last character to compare.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen_recursion - Get the length of a string.
 * @s: The string to get the length.
 *
 * Return: The string length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (_strlen_recursion(s) + 1);
}
