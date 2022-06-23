#include "main.h"

/**
 * factorial - calculates factorial
 * @n: parameter to be
 * Return: returns int
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
