#include <stdio.h>
#include "main.h"

/**
 * main - check the code 
 *
 * Return: always 0
 */

int main(void)
{
	char c;

	c = 'd';
	printf("%c: %d\n", c, _isupper(c));

	c = 'F';
	printf("%c: %d\n", c, _isupper(c));

	return (0);
}
