#include "main.h"

/**
 * leet - entry point
 * @str: string
 * Return: str.
 */
char *leet(char *str)
{
	int a = 0, b = 0;
	char i[5] = {'A', 'E', 'O', 'T', 'L'};
	char j[5] = {'4', '3', '0', '7', '1'};

	while (str[a])
	{
		b = 0;
		while (b < 5)
		{
			if (str[a] == i[b] || str[a] - 32 == i[b])
			{
				str[a] = j[b];
			}
			b++;
		}
		a++;
	}
	return (str);
}
