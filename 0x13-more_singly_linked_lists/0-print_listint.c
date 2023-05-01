#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - function that prints every element of a list
 * @h: pointer to lisint_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (i);
}
