#include "main.h"
#include "_putchar.c"
/**
 * _isupper - checks whether the character is upper
 *@c:the character input
 * Return: 0
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
_putchar(1);
}
else
{
_putchar(0);
_putchar('\n');
}
