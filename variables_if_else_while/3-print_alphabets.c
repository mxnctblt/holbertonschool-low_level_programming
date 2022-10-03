#include <stdio.h>

/**
 * *main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
		char ch = 'a';
		char cha = 'A';

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		for (cha = 'A'; cha <= 'Z'; cha++)
		{
			putchar(cha);
		}
			putchar('\n');
		return (0);
}
