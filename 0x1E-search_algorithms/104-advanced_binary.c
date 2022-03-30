#include "search_algos.h"
#include <math.h>

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: return the index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i;
	int mid;

	i = 0;
	if (array == NULL)
		return (-1);
	if ((size - 1) > 0)
	{
		printf("Searching in array: ");
		while (i < size)
		{
			if (i != (size - 1))
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[size - 1]);
			i++;
		}
		mid = trunc(size / 2);
		if (array[mid] > value)
			return (advanced_binary(array, mid, value));
		else if (array[mid] < value)
			return (mid + advanced_binary(&array[mid], (size + 1
							) / 2, value));
		else
			return (mid);
	}
	return (-1);
}
