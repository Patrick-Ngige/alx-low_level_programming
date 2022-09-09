#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start of the main function
 *
 * Return: 0 means the program is a success
 */
int main(void)
{
char c;
c = 'a';
do {
if (c != 'e' && c != 'q')
{
putchar(c);
c++;
}
else
c++;
} while (c <= 'z');
putchar('\n');
return (0);
}
