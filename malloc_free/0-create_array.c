#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - fuction
 * @size: size
 * @c: c
 * Return: 0 if NULL.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar;

	ar = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
