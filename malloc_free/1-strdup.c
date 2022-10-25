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

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size] != '\0'; size++)
		;
	size++;
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	while (i < size)
	{
		ar[i] = str[i];
		i++;
	}
	return (ar);
}
