#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @n: number of elements of the array to be printed
 * @a: the pointer of the array
 * Return: no expected return
 */
void print_array(int *a, int n)
{
int i;
while (i < n)
{
	printf("%d", a[i]);
	if (i < (n - 1))
		printf(", ");
	i++;
}
printf("\n");
}

