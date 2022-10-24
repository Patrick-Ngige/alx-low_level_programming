#include "lists.h"
#include <stdio.h>

/**
 * print_list - a function that prints all the elements
 * of a list_t list
 * @h: pointer to the start of the list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t n_nodes;

	if (!h)
		return (0);
	n_nodes = 0;
	do {
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		printf("\n");
		h = h->next;
		n_nodes++;
	} while (h);

	return (n_nodes);
}
