#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: pointer to string to be decoded
 * Return: pointer to string decoded
 */
char *rot13(char *n)
{
	int i;
	int j;
	char lett[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rota[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for  (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
		{
			if (n[i] == lett[j])
			{
				n[i] = rota[j];
				break;
			}
		}
	}
	return (n);
}
