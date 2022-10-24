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

	while (tmp != NULL)
	{
		if (tmp->str)
			printf("[%u] %s\n", tmp->len, tmp->str);
		else
			printf("[%u] %s\n", 0, "(nil)");
		tmp = tmp->next;
		count++;
	}
	return (count);
}
