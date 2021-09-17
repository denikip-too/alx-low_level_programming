#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: The size of the argv array
 * @argv: An array of size argc
 * Return: 0 or -1 if programs does not receive two arguments
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 3)
	{
		int n, m, mult = 0;

		n = atoi(argv[1]);
		m = atoi(argv[2]);
		mult = n * m;
		printf("%d\n", mult);
	}
	return (0);
}
