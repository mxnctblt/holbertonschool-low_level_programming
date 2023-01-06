#include "search_algos.h"

/**
 * binary_search - search for a value using a binary search algorithm
 * @array: array to be searched
 * @size: length of the array
 * @value: value to be searched
 * Return: -1
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1, middle, i;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[i]);

		middle = (l + r) / 2;

		if (array[middle] == value)
			return (middle);
		else if (value > array[middle])
			l = middle + 1;
		else
			r = middle - 1;
	}
	return (-1);
}
