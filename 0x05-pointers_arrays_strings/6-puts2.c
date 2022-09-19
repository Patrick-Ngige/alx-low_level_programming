#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: the string to print
 * Return: no returning
 */
void puts2(char *str)
{
int count;
count = 0;
while (str[count] != '\0')
{
_putchar(*(str + count));
count = count + 2;
}
_putchar('\n');
}
