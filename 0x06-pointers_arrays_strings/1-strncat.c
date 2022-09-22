#include "main.h"

/**
 * *_strncat - adds src to the dest
 * @dest: string to add by src
 * @src: string to add to dest
 * @n: largest of the numbers to append
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (*(dest + a))
		a++;
	while (b < n && *(src + b))
	{
		*(dest + a) = *(src + b);
		a++;
		b++;
	}
	if (b < n)
		*(dest + a) = *(src + b);
	return (dest);
}
