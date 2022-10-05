#include "main.h"

/**
* times_table - Entry point
*
*
* Return: Always 0.
*/
void times_table(void)
{
	int i;
	int j;
	int n;

		for (i = 0; i <= 9; i++)
		{
			_putchar(48);
			for (j = 1; j <= 9; j++)
			{
				n = i * j;
				_putchar(',');
				_putchar(' ');
				if (n <= 9)
				{
					_putchar(32);
					_putchar(n + '0');
				}
				else
				{
					_putchar(n / 10 + '0');
					_putchar(n % 10 + '0');
				}
			}
		_putchar('\n');
		}
}
