#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: string to check
 * @accept:string to be checked
 * @NULL:returns if byte is not present
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*(accept + j) == s[i])
				return (&(s[i]));
		}
	}
	return (0);
}
