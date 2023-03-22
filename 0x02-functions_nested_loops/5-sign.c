#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * return: return 1 if positive, return 0 is 0, return -1 if negative
 *
 */

int print_sign(int n)
{
	
	if (n > 0)
	{
		putchar(43);
		return(1);
	}

	else if (n == 0)
	{
		putchar(45);
		return(0);
	}

	else
	{
		putchar(48);
		return(-1);
	}
	return(0);
}
