#include "function_pointers.h"

/**
  * print_name - Prints a name using func pointer.
  * @name: The name to be printed.
  * @f: Pointer to the printing function.
  *
  * Return: Void.
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
