#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: binary number to convert
 * Return: the converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, n = 1;
	int i = 0;

	if (b == NULL)
		return (0);

	while (*(b + i))
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		i++;
	}
	for (i--; i >= 0; i--)
	{
		if (*(b + i) == '1')
			dec = dec + n;
		n = n * 2;
	}
	return (dec);
}
