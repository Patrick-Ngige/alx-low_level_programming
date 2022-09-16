#include "main.h"

/**
 * print_most_numbers - outputs a sequence from 0 to 9
 *with exception of 2 and 4
 * Return: no returns
 */
void print_most_numbers(void)
{
int a;
for (a = 0; a < 10; a++)
{
if (a != 2 && a != 4)
{
_putchar(a + '0');
}
}
_putchar('\n');
}
