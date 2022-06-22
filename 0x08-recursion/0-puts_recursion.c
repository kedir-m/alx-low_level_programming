#include "main.h"

/**
 * _puts_recursion - prints string
 * @s: string to be printe
 * Return: returns nothing
 */
void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_puts_recursion(s + 1);
}
