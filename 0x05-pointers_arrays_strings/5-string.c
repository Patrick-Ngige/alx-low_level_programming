#include "main.h"

/**
 * rev_string - a function to reverse a string
 * @n: the string to be reversed
 * Return: empty
 */
void rev_string(char *n)
{
int count;
char memo[100];
int index = 0;
for (count = 0; n[count] != '\0'; count++)
{
memo[count] = *(n + count);
}
count--;
for (; count >= 0; count--)
{
*(n + index) = *(memo + count);
index++;
}
}
