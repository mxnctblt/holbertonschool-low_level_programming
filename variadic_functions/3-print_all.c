#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_c - prints the char type
 * @arg: arguments from va_list
 */
void print_c(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_i - prints the integer type
 * @arg: arguments from va_list
 */
void print_i(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_f - prints the float type
 * @arg: arguments from va_list
 */
void print_f(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_s - prints the string type
 * @arg: arguments from va_list
 */
void print_s(va_list arg)
{
	char *str;

	str = (va_arg(arg, char *));
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - function that prints all type the arguments
 * @format: format
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	form typ[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	int i = 0, j = 0, n = 0;

	va_start(arg, format);
	while (format && format[j])
	{
		printf(n == 1 ? ", " : "");
		n = 0;
		while (typ[i].type)
		{
			if (*(typ[i].type) == format[j])
			{
				typ[i].f(arg);
				n = 1;
			}
			i++;
		}
		i = 0;
		j++;
	}
	va_end(arg);
	printf("\n");
}
