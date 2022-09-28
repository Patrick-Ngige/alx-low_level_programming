#include "main.h"

/**
 * is_prime_number - checks  if a number is a prime number
 * @n: the given number
 * Return: 1 if the number is a prime number
 */
int is_prime_number(int n)
{
	return (get_prime(n, 2));
}

/**
 * get_prime - get the square root recursively
 * @n: number to evaluate for prime
 * @i: iterator
 * Return: 1 if prime number & 0 if not
 */
int get_prime(int n, int i)
{
	if (n < 2)
		return (0);
	else if (n % i == 0 && i != n)
		return (0);
	else if (i == n)
		return (1);
	return (get_prime(n, i + 1));
}
