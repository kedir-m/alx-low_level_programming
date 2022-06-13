#include <stdio.h>
#include "main.h"

/**
 * _strlen - sometext
 * @s: sometext
 * Return: some too
 */

int _strlen(char *s)
{
	int n;

	n = 0;
	while (*(s + n))
		n++;

	return (n);
}
