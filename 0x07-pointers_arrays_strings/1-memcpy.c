#include <stdio.h>
#include "main.h"

/**
 * _memcpy - some text
 * @dest: some text
 * @src: some text
 * @n: some too
 * Return: retruns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
