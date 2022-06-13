#include "main.h"

/**
 * _puts - sometext
 * @str: sometext
 * Return: some too
 */

void _puts(char *str)
{
	int n;

	n = 0;
	while (*(str + n))
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
