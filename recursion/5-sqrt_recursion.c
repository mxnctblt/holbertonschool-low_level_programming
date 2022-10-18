#include "main.h"

/**
 * sqrtrec - entry point
 * @x: x
 * @y: y
 * Return: -1 if no square root
 */
int sqrtrec(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (sqrtrec(x, y + 1));
}

/**
 * _sqrt_recursion - entry point
 * @n: n
 * Return: -1 if no square root
 */
int _sqrt_recursion(int n)
{
	return (sqrtrec(n, 1));
}
