#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: n
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; n > 0; n--, j++)
		{
				for (i = 0; i < j; i++)
				{
					_putchar(32);
				}
			_putchar(92);
			_putchar('\n');
		}
	}
}
