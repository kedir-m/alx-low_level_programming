#include <stdio.h>
#include "main.h"

/**
 * _memset - some text
 * @s: some text
 * @b: some text
 * @n: some too
 * Return: retruns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
