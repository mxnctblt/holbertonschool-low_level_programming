#include "main.h"
#include <string.h>

/**
 * _strspn - entry point
 * @accept: accept
 * @s: s.
 * Return: void.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if ((s == NULL) || (accept == NULL))
	{
		return (len);
	}
	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
