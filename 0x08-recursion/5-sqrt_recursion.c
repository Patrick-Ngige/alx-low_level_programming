#include "main.h"

/**
 * sqrt_check - find the square root
 * @n: number to squareroot
 * @m: number to check if it's the sqrt of n
 * Return; the sqrt value
 */
int sqrt_check(int n, int m)
{
	if (m * m == n)
		return (m);
	else if (m >= n / 2)
		return (-1);
	return (sqrt_check(n, m + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (sqrt_check(n, 1));
}
