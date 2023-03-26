#include <stdio.h>
#include "main.h"

/**
 * main - checks the code
 *
 * Return: Always 0
 */

int main(void)
{
	int t;

	t = _abs(-4);
	printf("%d\n", t);

	t = _abs(34);
	printf("%d\n", t);

	t = _abs(-92);
	printf("%d\n", t);

	return (0);
}
