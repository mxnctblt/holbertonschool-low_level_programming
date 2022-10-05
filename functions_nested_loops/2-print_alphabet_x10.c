#include "main.h"

/**
* print_alphabet_x10 - Entry point
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int alpha;
	int bet = 0;

	while (bet <= 9)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		bet++;
		_putchar('\n');
	}
}
