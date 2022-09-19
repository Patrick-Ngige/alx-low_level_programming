#include "main.h"

/**
 * swap_int - a function used to swap the values of two integers
 * @m: first input
 * @n: second input
 * Return: 0 success
 */
void swap_int(int *m, int *n)
{
int temp = *m;
*m = *n;
*n = temp;
}
