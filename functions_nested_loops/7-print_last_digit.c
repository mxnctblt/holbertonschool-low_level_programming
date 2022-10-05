#include "main.h"

/**
* print_last_digit - Entry point
*
*@l: description of l
*
* Return: 0.
*/
int print_last_digit(int l)
{
	if (l > 0)
	{
		l = l % 10;
		_putchar('0' + l);
	}
	else if (l < 0)
	{
		l = l % 10 * -1;
		_putchar('0' + l);
	}
	else if (l == 0)
	{
		l = 0;
		_putchar('0' + l);
	}
	else
	{
		return (0);
	}
	return (l);
}
