#include "main.h"

/**
 * _puts - a function to print a string
 * @str: the string to be printed
 * Return: string
 */
void _puts(char *str)
{
int count;
for (count = 0; str[count] != '\0'; count++)
{
_putchar(*(str + count));
}
_putchar('\n');
}
