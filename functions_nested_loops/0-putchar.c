#include "main.h"

/**
* *main - Entry point
*
* Return: int
*/
int main(void)
{
		char str_hol[] = "_putchar";
		int n;

		n = 0;

		while (n <= 8)
		{
			_putchar(str_hol[n]);
			n++;
		}
		_putchar('\n');
		return (0);
}
