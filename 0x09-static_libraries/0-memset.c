#include "main.h"
/**
 * _memset - fills the memory with a constant byte
 * @s:pointer to the string to be filled
 * @b: byte to be filled in s
 * @n: number of bytes in s to be filled with b
 * Return: returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n; i++)
	{
		*(s + i) = b;
		n--;
	}
	return (s);
}
