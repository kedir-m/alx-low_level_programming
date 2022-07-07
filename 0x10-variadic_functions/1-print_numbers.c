#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints number
 * @separator: comma separator
 * @n: counter
 * @...: variable argument
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			int num = va_arg(args, int);

			printf("%d", num);
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
