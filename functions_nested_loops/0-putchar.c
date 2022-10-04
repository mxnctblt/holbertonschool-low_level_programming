#include "main.h"

/**
* *main - Entry point
*
* Return: 0
*/
int main(void)
{
		char hol[] = "_putchar";
		int n;

		n = 0;

		while (n <= 8)
		{
			_putchar(hol[n]);
			n++;
		}
		_putchar('\n');
		return (0);
}
