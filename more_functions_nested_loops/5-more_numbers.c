#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int num;
	int ber = 0;

	for (ber = 0; ber <= 9; ++ber)
	{
		for  (num = 0; num <= 14; ++num)
		{
			if (num > 9)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
