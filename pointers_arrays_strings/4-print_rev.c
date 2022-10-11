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
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	while (len >= 0)
	{
		_putchar(*s--), len--;
	}
	_putchar('\n');
}
