#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: list head
 * @n: integer
 * Return: the address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *l = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (*head != NULL)
	{
		while (l->next != NULL)
			l = l->next;
		l->next = new;
	}
	else
		*head = new;
	new->n = n;
	new->next = NULL;
	return (new);
}
