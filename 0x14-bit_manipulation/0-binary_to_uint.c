#include "main.h"

/**
 * _strlen - computes string length
 * @str: string
 * Return: returns string length
 */
int _strlen(const char *str)
{
	int  i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

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
/**
 * binary_to_uint - bnary to unsigned int converter
 * @b: binary number
 * Return: returns unsigned int
 *
 */
siz_t binary_to_uint(const char *b)
{
	siz_t sum = 0;
	int i, tmp, n, j = 0;

	if (b == NULL)
		return (0);

	n = _strlen(b);

	for (i = n - 1; i >= 0; i--, j++)
	{

		tmp = b[i] - '0';
		if (tmp < 0 || tmp > 1)
			return (0);
		sum += tmp * powr(2, j);
	}
	return (sum);
}
