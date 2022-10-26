#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function
 * @s1: string 1
 * @s2: string 2
 * @n: n
 * Return: NULL or pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int size1, size2;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
		s1 = s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;
	if (size2 > n)
		size2 = n;
	size2++;
	ar = malloc((size1 + size2) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		ar[i] = s1[i];
	for (j = 0; j < size2; j++)
	{
		ar[i] = s2[j];
		i++;
	}
	return (ar);
}
