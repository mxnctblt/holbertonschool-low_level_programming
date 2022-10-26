#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function
 * @width: width
 * @height: height
 * Return: NULL if failure.
 */
int **alloc_grid(int width, int height)
{
	int h, w;
	int **ar;

	if (width == 0 || height == 0)
		return (NULL);
	ar = malloc(height * sizeof(int));
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		ar[h] = malloc(width * sizeof(int));
		if (ar == NULL)
		{
			free(ar);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			ar[h][w] = 0;
	}
	return (ar);
}
