#include "main.h"

/**
 * _isupper - checks whether the character is upper
 *@c:the character input
 * Return: 0
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
