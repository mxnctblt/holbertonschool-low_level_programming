#include "main.h"
#include <stddef.h>

/**
 * _memcpy - entry point
 * @src: source
 * @dest: destination
 * @n: n
 * Return: void.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *xdest = (char *)dest;
	const char *xsrc = (const char *)src;

	if ((xdest != NULL) && (xsrc != NULL))
	{
		while (n)
		{
			*(xdest++) = *(xsrc++);
			--n;
		}
	}
	return (dest);
}
