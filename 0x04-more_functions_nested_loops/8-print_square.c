#include "main.h"

/**
 * print_square - outputs the square of a given number
 * @n: input to check
 * Return: no return
 */
void print_square(int n)
{
int h, a;
if (n <= 0)
{
_putchar('\n');
}
for (a = 0; a < n; a++)
{
for (h = 0; h < n; h++)
{
_putchar('#');
}
_putchar('\n');
}
}
