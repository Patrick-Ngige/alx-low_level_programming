#include "main.h"

/**
 * *_strncpy - copies the content of the string and stores it in the pointer
 * @dest: pointer to destination of the copied string
 * @src: the source from which the specified string size will be copied
 * @n: number of bytes to copied
 * Return: pointer to the destination
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;

	if (n > 0)
	{
		while (i < n && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}

		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

