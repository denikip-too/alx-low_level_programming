#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Check if input is only numbers
 * @num: Given input to check
 *
 * Return: 1 if a number, 0 if otherwise
 */
int _isdigit(int num)
{
	if (num < '0' || num > '9')
		return (0);
	return (1);
}
/**
 * main - multiplies two positive numbers and print result
 * @argc: input count of args
 * @argv: input array of string args
 * Return: 0, success
 */
int main(int argc, char *argv[])
{
	int i;

	malloc();
	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	if (argc == 3)
	{
		int mult, num1, num2;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		if (!(_isdigit(num1) || _isdigit(num2)))
		{
			_purchar('E');
			_purchar('r');
			_purchar('r');
			_purchar('o');
			_purchar('r');
			_purchar('\n');
			exit(98);
		}
		else
		{
			mult = num1 * num2;
			_putchar(mult);
		}
	}
	return (0);
}
