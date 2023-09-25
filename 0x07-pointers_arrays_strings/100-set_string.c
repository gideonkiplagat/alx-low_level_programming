#include "main.h"

/**
  * set_string - Sets the value of a pointer to char
  * @s: A pointer to a pointer to a char.
  * @to: the value to assign
  *
  * Return: Nothing.
  */
void set_string(char **s, char *to)
{
	*s = to;
}
