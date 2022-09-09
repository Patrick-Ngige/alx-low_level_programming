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
putchar((i / 10) + '0');
purchar((i % 10) + '0');
if (i < 99)
{
putchar(',');
putchar(' ');
}
else
putchar('\n');
}
return (0);
}
