#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: Array to search
 * @size: Size of array
 * @value: Value to search for
 * Return: -1 or i
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
