#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: represents number of columns
 * @height: represents number of rows
 * Return: returns a pointer to a 2 dimensional array of integers
 * or NULL on failure / If width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int));
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
	}
	return (array);
}
