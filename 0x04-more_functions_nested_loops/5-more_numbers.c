#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 *
 */

void more_numbers(void)
{
	int x, t;

	for (x = 0; x < 10; x++)
	{
		for (t = 0; t < 15; t++)
		{
			if (t >= 10)
				_putchar(t / 10 + '0');
			_putchar(t % 10 + '0');
		}

		_putchar('\n');
	}
}
