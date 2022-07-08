#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_int - prints int
 * @list: arguments from print_all
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - prints float
 * @list: arguments from print_all
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_char - prints int
 * @list: arguments from print_all
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_str - prints string
 * @list: arguments from print_all
 */
void print_str(va_list list)
{
	char *s = va_arg(list, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);

}

/**
 * print_all - prints any type
 * @format: arguments to print
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
