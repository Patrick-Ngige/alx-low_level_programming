#include "main.h"

/**
 * _atoi - converts strings to integers
 *@n:the string 
 *
 * Return: return the value
 */
int _atoi(char *n)
{
int index = 0;
unsigned int saver = 0;
int symbol = 1;
int breaker = 0;
while (*(n + index) != '\0' && breaker < 1)
{
if (*(n + index) == '-')
{
symbol *= -1;
}
while (*(n + index) >= '0' && *(n + index) <= '9')
{
breaker = 1;
if (saver == 0)
saver = (*(n + index) - '0');
else
{
saver *= 10;
saver = saver + (*(n + index) - '0');
}
index++;
}
index++;
}
saver *= symbol;
return (saver);
}
