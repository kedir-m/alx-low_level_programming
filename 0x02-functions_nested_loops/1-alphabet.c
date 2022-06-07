#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints lower char
 *
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	putchar(10);
}
