#include "main.h"
#include <stdlib.h>

/**
 * *create_array - a function that creates an array
 * of chars and iniatializes it with a specific char
 * @c:char to initialize array with
 * @size: size of array to be created
 * Return: NULL if size = 0 or if it fails
 * & a pointer to the array if it executes
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
