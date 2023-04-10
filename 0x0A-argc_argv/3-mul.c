#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers and prints out the result
 *
 * return: 0 if success 1 if error
 */

int main(int argc, char *argv[])
{
	int mul, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;

	printf("%i\n", mul);

	return (0);
}


