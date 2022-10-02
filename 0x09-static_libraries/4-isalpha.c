#include "main.h"

/**
 * _isalpha - acting main function
 *
 * @n: integer under test
 *
 * Return: 0
 */
int _isalpha(int n)
{
if (n >= 97 && n <= 122)
{
return (1);
}
else if (n >= 65 && n <= 90)
{
return (1);
}
else
{
return (0);
}
}
