#include "main.h"
#include <stddef.h>

/**
 * _strchr - entry point
 * @c: c
 * @s: s
 * Return: void.
 */
char *_strchr(char *s, char c)
{
	char *n = NULL;

	if (s != NULL)
	{
		do {
			if (*s == (char) c)
			{
				n = s;
				break;
			}
		} while (*s++);
	}
	return (n);
}
