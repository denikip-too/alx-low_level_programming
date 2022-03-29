#include "search_algos.h"
#include <math.h>

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: value to search
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, mid, r, i;

	l = 0;
	r = size - 1;
	if (value == NULL || array == NULL)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i != r)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d\n", array[r]);
				break;
			}
		}
		mid = floor((l + r) / 2);
		if (array[mid] < value)
		{
			l = mid + 1;
		}
		else if (array[mid] > value)
		{
			r = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
