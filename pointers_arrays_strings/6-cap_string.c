#include "main.h"

/**
 * cap_string - entry point
 * @str: string
 * Return: void.
 */
char *cap_string(char *str)
{
	int n = 0, i;
	char sep[] = {' ', '\n', '\t', ',', ';', '.', '!', '?',
		'"', '(', ')', '{', '}' };
	int ifsep = 13;

	while (str[n])
	{
		i = 0;
		while (i < ifsep)
		{
			if ((n == 0 || str[n - 1] == sep[i]) && (str[n] >= 97 && str[n] <= 122))
			{
				str[n] -= 32;
			}
			i++;
		}
		n++;
	}
	return (str);
}
