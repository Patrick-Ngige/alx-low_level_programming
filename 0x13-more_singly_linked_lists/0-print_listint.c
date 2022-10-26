#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function to print all the elements of a listint_t list
 * @h: list to print
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}
	return (n_nodes);
}
