#include "lists.h"
#include <string.h>
#include <stdio.h>

list_t *new_node(const char *str);
/**
 * add_node_end - a function that added a new node to the end of the list
 * @head: pointer to pointer of a list_t
 * @str: string to copy into a node
 * Return: pointer to a list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	if (!(*head))
	{
		*head = new_node(str);
		return (*head);
	}
	if (!(*head)->next)
	{
		new = new_node(str);
		new->next = (*head)->next;
		(*head)->next = new;
	}
	else
		add_node_end(&(*head)->next, str);
	return (*head);
}
