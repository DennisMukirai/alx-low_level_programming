#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * argc: argument count
 * argv: argument vector
 * return: always 0
 */
int main(int argc, char *argv[])
{
	
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
