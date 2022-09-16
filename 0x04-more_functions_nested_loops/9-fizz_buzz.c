#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiples of 3 print Fizz, multiples of five Buzz
 * multiples of both FizzBuzz
 * Return: 0 is success
 */
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
((a % 3) == 0) ?
(((a % 5) == 0) ? (printf("FizzBuzz")) : (printf("Fizz"))) : (((a % 5) == 0) ? (printf("Buzz")) : (printf("%i", a)));
(a < 100) ? (putchar(' ')) : (putchar('\n'));
}
return (0);
}
