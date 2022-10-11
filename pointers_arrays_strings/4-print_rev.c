#include "main.h"

/**
 * print_rev - entry point
 *
 * @s: string to putchar in rev
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
		;
	for (a = a - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
