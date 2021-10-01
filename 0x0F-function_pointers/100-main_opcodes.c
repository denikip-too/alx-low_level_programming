#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the opcodes
 * @argc: number of arguments
 * @argv: array containing argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, size;

	if (argc != 2)
	{
		printf("Error\n"), exit(1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n"), exit(2);
	}
	for (x = 0; x < size; x++)
	{
		printf("%02hhx", *((char *)main + x));
		if (x < size - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
