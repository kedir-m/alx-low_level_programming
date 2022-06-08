#include <stdio.h>
#include "main.h"
/**
 * _abs - checks alpha char
 * @n: the number to be evaluated
 * Return: 1 or 0 or -1
 *
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1 * n);
	}
}
