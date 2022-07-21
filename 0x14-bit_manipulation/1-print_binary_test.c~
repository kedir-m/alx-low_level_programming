#include "main.h"

/**
 * powr - computes power of number
 * @base: base number
 * @exponent: exponent number
 * Return: returns result
 */
int powr(int base, int exponent)
{
	int  i, res = 1;

	if (exponent == 0)
		return (1);
	for (i = 0; i < exponent; i++)
	{
		res = res * base;
	}

	return (res);
}

void print_binary(unsigned long int n)
{
	int i, j, m, sum = 0;
	int k = (int)n;

	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; powr(2, i) <= k; i++)
		;
	m = i - 1;
	for (j = m; j >= 0; j--)
	{

		if (sum + powr(2, j) > k)
		{
			_putchar('0');
			continue;
		}
		sum += powr(2, j);
		_putchar('1');
	}
}
