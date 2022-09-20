#include "main.h"

/**
 * print_rev - prints the input character in reverse
 * @n: string to be reversed
 * Return: reverse
 */
void print_rev(char *n)
{
int i = 0;
while (*(n + i))
	i++;
i = i - 1;
while (i >= 0)
{
	_putchar(*(n + i));
	i--;
}
_putchar('\n');
}
