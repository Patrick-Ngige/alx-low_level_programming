#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - a function that concatenates all the arguments of your program
 * @ac: an integer
 * @av: a character
 * Return: a pointer to a new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *c;
	int i, j, size = 0, k = 0;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			size++;
		}
		size++;
	}
	size++;

	c = malloc(size);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			c[k] = av[i][j];
			k++;
		}
		c[k] = '\n';
		k++;
	}
	c[k] = '\0';
	return (c);
}
