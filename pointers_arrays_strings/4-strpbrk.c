#include "main.h"
#include <string.h>

/**
 * _strpbrk - entry point
 * @accept: accept
 * @s: s.
 * Return: void.
 */
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
