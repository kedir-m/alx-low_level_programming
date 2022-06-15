#include "main.h"

/**
 * _strncat - writes the character c to stdout
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: type char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;
	char a;

	for (i = 0; dest[i] != '\0'; i++)
		;

	a = dest[i];

	for (j = 0; src[j] != '\0'; j++)
		;

	for (k = 0; k < n; k++)
	{
	if (k <= j)
	{
		dest[i] = src[k];
		i++;
	}
	else
	{
		break;
	}
	}
	dest[i] = a;

	return (dest);
}
