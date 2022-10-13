#include "main.h"

/**
 * reverse_array - entry point
 * @a: a
 * @n: n
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i = 0, j =  0;

	n -= 1;
	while (i <= n)
	{
		j = a[n];
		a[n--] = a[i];
		a[i++] = j;
	}
}
