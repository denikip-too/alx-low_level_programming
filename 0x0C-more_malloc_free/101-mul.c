#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two positive numbers and print result
 * @argc: input count of args
 * @argv: input array of string args
 * Return: 0, success
 */
int main(int argc, char *argv[])
{
	unsigned long mul;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if ((argv[i][j]) < '0' && (argv[i][j]) > '9')
			{
				printf("Error\n"), exit(98);
			}
		}
	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
	return (0);
}
