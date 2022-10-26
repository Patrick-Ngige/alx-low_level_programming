#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a linked list
 * @head: list head
 * Return: the sum of all the data (n) or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *p;
	int sum = 0;

	p = head;
	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
