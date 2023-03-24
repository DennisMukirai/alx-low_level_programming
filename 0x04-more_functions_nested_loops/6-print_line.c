#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 *
 * @n: number of times the character _ should be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int a;

		for (a = 0; a <= n; a++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
}
