#include "main.h"

/**
 * print_rev - sometext
 * @s: sometext
 * Return: some too
 */

void print_rev(char *s)
{
	int n;

	n = 0;
	while (s[n])
	{
		n++;
	}
	n = n - 1;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
