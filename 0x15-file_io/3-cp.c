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
	int op, op1;
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
	r = read(op, buf, 1024);
	w = write(op1, buf, r);
	while (r != 0)
	{
		if (w != 1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
		if (r != 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	if ((close(op)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", op), exit(100);
	}
	if ((close(op1)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", op1), exit(100);
	}
	return (0);
}
