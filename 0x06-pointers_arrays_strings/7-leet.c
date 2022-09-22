#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: pointer to string to be decoded
 * Return: pointer to string decoded
 */
char *leet(char *n)
{
	int i;
	int j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (n[i] == letters[j])
			{
				n[i] = numbers[j];
				break;
			}
		}
	}
	return (n);
}
