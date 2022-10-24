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
	const list_t *tmp;
	unsigned int i;

	tmp = h;

	if (tmp == NULL)
		printf("[0] (nil)");
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}
