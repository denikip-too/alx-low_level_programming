#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: The size of the argv array
 * @argv: An array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argv;
	while (--argc)
	{
		i++;
	}
	printf("%d\n", i);
	return (0);
}
