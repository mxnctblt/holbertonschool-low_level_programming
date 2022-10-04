#include "main.h"

/**
* *main - Entry point
*
* Return: int
*/
int main(void)
{
		char hol[] = "_putchar";
		int n;

		n = 0;

		while (n <= 7)
		{
			_putchar(hol[n]);
			n++;
		}
		_putchar('\n');
		return (0);
}
