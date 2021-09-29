#include "3-calc.h"
#include <stdio.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array containing argc elements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	register int x, y;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}
	p = get_op_func(argv[2]);
	if (!p)
	{
		printf("Error\n"), exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	printf("%i\n", p(x, y));
	return (0);
}
