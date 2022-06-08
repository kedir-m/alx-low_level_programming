#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - last digit
 * @n: the number to be evaluated
 * Return: last digit
 *
 */
int print_last_digit(int n)
{
	int d;

	if (n > 0)
	{
		d = n % 10;
	}
	else
	{
		d = n  % 10;
		d = -1 * d;
	}
	_putchar(d + '0');
	return (d);
}
