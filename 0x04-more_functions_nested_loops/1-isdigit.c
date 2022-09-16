#include "main.h"

/**
 *_isdigit - checks for a digit
 *@n: character/digit to be tested
 *Return: 0
 */
int _isdigit(int n)
{
if (n >= 48 && n <= 57)
{
_putchar(1);
_putchar('\n');
}
else
{
_putchar(0);
_putchar('\n');
}
}
