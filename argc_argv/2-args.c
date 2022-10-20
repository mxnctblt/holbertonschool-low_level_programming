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

	printf ("%s\n",argv[0]);
	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	else
	{
		printf("\n");
	}
	return 0;
}
