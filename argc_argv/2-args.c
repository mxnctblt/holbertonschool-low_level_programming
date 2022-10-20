#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arg
 * @argv: array of arg
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	else
	{
		printf("\n");
	}
	return (0);
}
