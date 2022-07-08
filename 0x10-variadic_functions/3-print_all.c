#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);
}
/**
 * print_all - prints number
 *
 * @format: counter
 * @...: variable argument
 * Return: returns num
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int j = 0, k = 0;
	char *sep = "";
	structType printType[] = {
		{ "i", print_int },
		{ "f", print_float },
		{ "c", print_char },
		{ "s", print_string },
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[j])
	{
		k = 0;
		while (k < 4)
		{
			if (*printType[k].type == format[j])
			{
				printf("%s", sep);
				printType[k].printer(args);
				sep = ", ";
				break;
			}
			k++;
		}
		j++;
	}
	printf("\n");
	va_end(args);
}
