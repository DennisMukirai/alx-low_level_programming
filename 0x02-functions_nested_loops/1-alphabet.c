#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * return: always 0
 * print_alphabet - Prints the alphabet
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
