#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start of main fucntion
 *
 * Return: 0 means programm is successfull
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
