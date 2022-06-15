#include "main.h"

/**
 * _strcat - writes the character c to stdout
 * @dest: parameter 1
 * @src: parameter 2
 * Return: type char pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	char a;

	for (i = 0; dest[i] !='\0'; i++)
		;

	a = dest[i];

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = a;

	return (dest);
}
