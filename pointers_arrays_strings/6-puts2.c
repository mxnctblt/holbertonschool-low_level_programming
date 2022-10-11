#include "main.h"

/**
 * puts2 - entry point
 * @str: string
 * Return: Always 0.
 */
void puts2(char *str)
{
	while (*str)
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar(10);
}
