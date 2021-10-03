#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Check if input is only numbers
 * @argv: Given input to check
 *
 * Return: 1 if a number, 0 if otherwise
 */
int _isdigit(char *argv)
{
	int i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] >= '0' && argv[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}
/**
 * main - multiplies two positive numbers and print result
 * @argc: input count of args
 * @argv: input array of string args
 * Return: 0, success
 */
int main(int argc, char *argv[])
{
	unsigned long mul, num1, num2;
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
			if ((argv[i][j]) <'0' && (argv[i][j]) > '9')
			{
				printf("Error\n"), exit(98);
			}
		}
	}
	num1 = atol(argv[1]);
	num2 = atol(argv[2]);
	mul = num1 * num2;
	printf("%lu\n", mul);
	return (0);
}
