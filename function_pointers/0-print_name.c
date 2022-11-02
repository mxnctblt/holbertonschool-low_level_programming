#include "function_pointers.h"

/**
 * print_name - function that print name
 * @f: founction pointer
 * @name: name to print
 * Return: 0.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
