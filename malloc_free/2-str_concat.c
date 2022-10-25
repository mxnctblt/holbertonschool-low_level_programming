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
	int i = 0;
	int siz1, siz2;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL && s2 == NULL)
		s1 = s2 = "";
	for (siz1 = 0; siz1 <= *s1; siz1++)
	{
	}
	for (siz2 = 0; siz2 <= *s2; siz2++)
	{
	}
	ar = malloc((siz1 + siz2 + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);
	while (*s1)
	{
		ar[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		ar[i] = *s2;
		i++;
		s2++;
	}
	return (ar);
}
