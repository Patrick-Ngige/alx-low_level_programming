#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Main function
 *
 * Return: 0 is success
 */
int main(void)
{
int n;
int u;

srand(time(0));
n = rand() - RAND_MAX / 2;
u = n % 10;
if (u < 6 && u != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, u);
}
else if (u == 0)
{
printf("Last digit of %d is %d and is 0\n", n, u);
}
else
{
printf("Last digit of %d is %D and is greater than 5\n", n, u);
}
return (0);
}
