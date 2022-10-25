#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function
 * @str: string
 * Return: NULL if str = NULL.
 */
char *_strdup(char *str)
{
	int size = 0, i = 0;
	char *ar;

	while (size <= *str)
		size++;
	ar = malloc(size * sizeof(char));
	while (i < size)
	{
		ar[i] = str[i];
		i++;
	}
	if (str == NULL)
		return (NULL);
	if (ar == NULL)
		return (NULL);
	return (ar);
}
