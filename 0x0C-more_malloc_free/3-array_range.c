#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: min / first value of the array
 * @max: max / last value of the array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * ((max - min) + 1));
	if (!array)
	{
		free (p);
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
