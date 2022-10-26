#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function to print all the elements of a listint_t list
 * @h: list to print
 * Return: number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *l;
	size_t n_nodes = 0;
	int i;

	l = h;
	if (l != NULL)
	{
		for (i = 0; l != NULL; i++)
		{
			printf("%d\n", l->n);
			l = l->next;
			n_nodes++;
		}
	}
	return (n_nodes);
}
