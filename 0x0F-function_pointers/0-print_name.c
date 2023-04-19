#include <stdlib.h>

/**
 * print_name - function that prints a name
 * @name: pointer to name to be printed
 * @f: function to print name
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
