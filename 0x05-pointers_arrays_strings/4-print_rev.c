#include "main.h"

/**
 * print_rev - prints the input character in reverse
 * @n: string to be reversed
 * Return: reverse
 */
void print_rev(char *n)
{
int count;
for (count = 0; n[count] != '\0'; count++)
{
}
for (; count >= 0; count--)
{
_putchar(*(n + count));
}
_putchar('\n');
}
