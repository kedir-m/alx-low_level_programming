#include <stdlib.h>
#include "main.h"
/**
 * _strlen - computes string length
 *
 * @str: parameter 1
 * Return: returns i
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);

}

/**
 * string_nconcat - string concatenation
 * @s1:parameter 1
 * @s2:parameter 1
 * @n: parameter 3
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int i, j;

	if (n < _strlen(s2))
	{
		mem = malloc(_strlen(s1) * n* sizeof(char) + 1);

	}
	else
	{
		mem = malloc(_strlen(s1) * _strlen(s2) + 1);

	}

	for (i  = 0; s1[i] != '\0'; i++)
	{
		m[i] = s1[i];
	}

	for (j = 0; j <=  n; j++, i++)
	{
		m[i] = s2[j];
	}

	m[i] = '\0';

	return (m);
}
