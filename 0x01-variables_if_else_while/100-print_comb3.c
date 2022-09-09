#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 is success
 */
int main(void)
{
int i;
for (i = 0; i < 100; i++)
{
if ((i / 10) < (i % 10))
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
}
if (i < 89 && (i / 10) < (i % 10))
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
