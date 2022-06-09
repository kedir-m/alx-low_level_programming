#include <stdio.h>
#include "main.h"
/**
 * print_line - checks for upper case
 * @n: variable to be checked
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
