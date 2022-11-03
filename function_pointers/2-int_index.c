#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: the array to check
 * @size: the size of the array
 * @cmp: pointer to the function
 * Return: -1 or i.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
