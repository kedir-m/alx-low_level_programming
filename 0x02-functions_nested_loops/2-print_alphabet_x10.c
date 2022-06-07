#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints lower char
 *
 *
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar(10);
	}
}
