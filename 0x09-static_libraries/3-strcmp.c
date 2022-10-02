#include "main.h"

/**
 * _strcmp - is a string comparer
 * @str1: the first string to be compared
 * @str2: the string to compare
 * Return: str1 - str2
 */
int _strcmp(char *str1, char *str2)
{
	int n;

	n = 0;

	while (str1[n] != '\0' && str2[n] != '\0')
	{
		if (str1[n] != str2[n])
			return (str1[n] - str2[n]);
		n++;
	}
	return (str1[n] - str2[n]);
}
