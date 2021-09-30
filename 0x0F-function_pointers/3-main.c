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
	char *i;

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	i = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*i == '/' || *i == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	p = get_op_func(argv[2]);
	if (!p)
	{
		printf("Error\n"), exit(99);
	}
	printf("%i\n", p(x, y));
	return (0);
}
