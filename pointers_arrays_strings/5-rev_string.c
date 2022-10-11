#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - entry point
 *
 * @s: string
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int a, b;
	char *beg, *end, c;

	a = strlen(s);
	beg = s;
	end = s;

	for (b = 0; b < a - 1; b++)
		end++;
	for (b = 0; b < a / 2; b++)
	{
		c = *end;
		*end = *beg;
		*beg = c;
		beg++;
		end--;
	}
}
