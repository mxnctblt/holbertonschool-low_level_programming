#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 *             to get from one number to another.
 * @n: the number
 * @m: the other number
 * Return: the number of bits you would need to flip to get from one number to
 *         another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;

	n = n ^ m;
	while (n)
	{
		i += n & 1;
		n >>= 1;
	}
	return (i);
}
