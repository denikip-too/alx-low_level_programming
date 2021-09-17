#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: The size of the argv array
 * @argv: An array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		int i, j, sum = 0;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					return (printf("Error\n"), 1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%i\n", sum);
	}
	return (0);
}
