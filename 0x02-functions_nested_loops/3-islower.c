#include <stdio.h>
#include "main.h"
/**
 * _islower - prints lower char
 * @c: the char to be checked
 * Return: 1 or 0
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
