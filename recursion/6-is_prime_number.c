#include "main.h"

/**
 * primerec - entry point
 * @a: a
 * @b: b
 * Return: 1 or 0.
 */
int primerec(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (primerec(a, b + 1));
}

/**
 * is_prime_number - entry point
 * @n: n
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primerec(n, 2));
}
