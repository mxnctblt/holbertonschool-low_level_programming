#include "main.h"

/**
 * _memset - entry point
 * @s: s
 * @b: b
 * @n: n
 * Return: void.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (char)b;
	}
	return (s);
}
