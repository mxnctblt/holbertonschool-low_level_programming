#include "main.h"
#include <string.h>

/**
 * print_rev - entry point
 *
 * @s: string to putchar in rev
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; 1 >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
