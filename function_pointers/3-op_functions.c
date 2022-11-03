#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - operation to do
 * @a: 1st number
 * @b: 2nd number
 * Return: result of operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - operation to do
 * @a: 1st number
 * @b: 2nd number
 * Return: result of operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - operation to do
 * @a: 1st number
 * @b: 2nd number
 * Return: result of operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - operation to do
 * @a: 1st number
 * @b: 2nd number
 * Return: result of operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - operation to do
 * @a: 1st number
 * @b: 2nd number
 * Return: result of operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
