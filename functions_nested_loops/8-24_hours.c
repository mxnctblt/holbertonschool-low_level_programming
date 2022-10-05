#include "main.h"

/**
* jack_bauer - Entry point
*
* Return: Always 0.
*/
void jack_bauer(void)
{
	int h;
	int min;

	for (h = 0; h <= 23; h++)
	{
		for (min = 0; min <= 59; min++)
		{
		_putchar(h / 10 + '0');
		_putchar(h % 10 + '0');
		_putchar(':');
		_putchar(min / 10 + '0');
		_putchar(min % 10 + '0');
		_putchar('\n');
		}
	}
}
