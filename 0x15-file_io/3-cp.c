#include "main.h"
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array containg argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int op, op1, c1, c2;
	int w, r;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	op1 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (op1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	r = read(op, buf, 1024);
	w = write(op1, buf, r);
	while (r > 0)
	{
		if (op1 < 0 || w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c1 = close(op);
	if (c1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", op), exit(100);
	}
	c2 = close(op1);
	if (c2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", op1), exit(100);
	}
	return (0);
}
