#include "main.h"

/**
 * _strcpy - prints a copy string
 * @src: string to copy
 * @dest: string to be written
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i;
int n;
for (n = 0; *(src + n) != '\0'; n++)
{
}
for (i = 0; i <= n; i++)
{
dest[i] = src[i];
}
return (dest);
}
