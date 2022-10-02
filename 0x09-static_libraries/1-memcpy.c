#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: the destinantion of the bytes to be copied
 * @src: the source of the bytes to be copied
 * @n: the number of bytes to be copied
 * Return: a pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
