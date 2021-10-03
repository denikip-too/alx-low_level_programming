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
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (_isdigit(argv[1]) || _isdigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
