#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: number of command line
 * @argv: array that contains the program command line arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
