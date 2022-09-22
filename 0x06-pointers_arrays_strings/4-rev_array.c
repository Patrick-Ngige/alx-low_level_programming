#include "main.h"

/**
 * reverse_array -  used to reverse the elements of the array
 * @m: the array to be reversed
 * @n: length of the array
 * Return: reversed array
 */
void reverse_array(int *m, int n)
{
	int i = 0, t;

	n = n - 1;
	while (i < n)
	{
		t = *(m + i);
		*(m + i) = *(m + n);
		*(m + n) = t;
		i++;
		n--;
	}
}
