#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function
 * @min: minimum
 * @max: maximum
 * Return: NULL or the pointer
 */
int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(int) * (max-min) + 1);
	if (ar == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ar[i] = min;
		min++;
	}
	ar[i] = '\0';
	return (ar);
}
