#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @size: size of the array
 * @c: character to initialize the array with
 * return: a pointer to the array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
