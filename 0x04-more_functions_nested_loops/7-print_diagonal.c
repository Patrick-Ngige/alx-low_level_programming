#include "main.h"

/**
 * print_diagonal - outputs a diagonal of n large
 * @n: input to check
 * Return: 1 on success
 * 0 on error/ no uppercase
 */
void print_diagonal(int n)
{
int h, a;
if (n <= 0)
{
_putchar('\n');
}
for (a = 1; a <= n; a++)
{
for (h = 1; h < a; h++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
