#include "main.h"

/**
 * _srncpy - writes the character c to stdout
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: type char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int  k;

	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}

	for ( ;k < n; k++)
		dest[k] = '\0';

	return (dest);
}
