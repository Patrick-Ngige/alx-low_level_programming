#include "main.h"

/**
 * is_sep - checks to see if the char is a separator or not
 * @n: a chaacter to test
 * Return: 1 if separator and 0 if not
 */
int is_sep(char n)
{
	char sep[] = {' ', '\t', '\n', ',', ';', '!', '?', '"', '(', ')', '{', '}'};

	int i = 0;

	while (sep[i] != '\0')
	{
		if (n == sep[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - capitalizes all the characters of the given string
 * @n: the string to be tested
 * Return: capitalized string
 */
char *cap_string(char *n)
{
	int sep, i;

	sep = 1;
	i = 0;

	while (n[i] != '\0')
	{
		if (sep == 1 && (n[i] >= 'a' && n[i] <= 'z'))
		{
			n[i] -= 32;
			sep = 0;
		}
		sep = is_sep(n[i]);
		i++;
	}
	return (n);
}
