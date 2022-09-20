#include "main.h"

/**
 * rev_string - a function to reverse a string
 * @n: the string to be reversed
 * Return: empty
 */
void rev_string(char *n)
{
int i = 0, j = 0;
char str[500];
while (*(n + i))
{
	*(str + i) = *(n + i);
	i++;
}
i = i - 1;
while (i >= 0)
{
	*(n + i) = *(str + j);
	j++;
	i--;
}
}
