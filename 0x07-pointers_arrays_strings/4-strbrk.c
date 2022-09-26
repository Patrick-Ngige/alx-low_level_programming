#include "main.h"

/**
 * _strbrk - a function that searches a string for any of a set of bytes
 * @s: string to check
 * @accept:string to be checked
 * Return: pointer to the byte
 */
char *_strbrk(char *s, char *accept)
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
	return (s);
}
