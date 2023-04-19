#include <stdlib.h>

/*
 * int_index - function that searches for an integer
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: The index of the first element for witch the cmp function
 * does not return 0; -1 if no elements matches or size <= 0.
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int a = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; a < size; a++)
		if (cmp(array[a]))
			return (a);
	if (a == size)
		return (-1);

	return (-1);
}
