#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: number of arg
 * @argv: array of arg
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{
	int i = 0, j = 0;
	int add;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
		add += atoi(argv[i]);
		}
	printf("%d\n", add);
	}
	return (0);
}
