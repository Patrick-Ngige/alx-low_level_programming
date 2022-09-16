#include "main.h"

/**
 * more_numbers - outputs a sequene of numbers ranging from 0 to 10 that loops x10
 * automated sequence to variable needed
 * Return: no returns
 */
void more_numbers(void)
{
int a, b;
for (b = 0; b < 10; b++)
{
for (a = 0; a < 15; a++)
{
if (a > 9)
{
_putchar((a / 10) + '0');
}
_putchar((a %10) + '0');
}
_putchar('\n');
}
}
