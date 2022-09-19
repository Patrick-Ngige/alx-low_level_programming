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
int printer;
for (printer = 0; printer < n; printer++)
{
printf("%d", *(a + printer));
if (printer < n - 1)
{
printf(",");
}
printf("\n");
}
}
