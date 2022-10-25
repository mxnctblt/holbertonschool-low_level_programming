#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int size1, size2;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
		s1 = s2 = "";
	for (size1 = 0; size1 <= *s1; size1++)
	{
	}
	for (size2 = 0; size2 <= *s2; size2++)
	{
	}
	ar = malloc((size1 + size2 + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	while (*s1)
	{
		ar[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		ar[j] = s2[j];
		j++;
	}
	return (ar);
}
