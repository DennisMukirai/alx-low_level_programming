#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * return: always 0
 * print_alphabet_x10 - prints the whole alphabet
 */
void print_alphabet_x10(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');
}

int main(void)
{
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	print_alphabet_x10();
	return (0);
}
