#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * @filename: file to be read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(letters + 1);
	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(buf);
		return (0);
	}
	r = read(op, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		free(buf);
		close(op);
		return (0);
	}
	free(buf);
	close(op);
	return (w);
}
