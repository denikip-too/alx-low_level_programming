#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array to be printed
 * @size: size of array a
 */
void print_diagsums(int *a, int size)
{
	int x = 0, y = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		j = (i * size) + i;
		x += a[j];
	}
	for (i = 1; i <= size; i++)
	{
		j = (i * size) - i;
		y += a[j];
	}
	printf("%d, %d\n", x, y);
}

