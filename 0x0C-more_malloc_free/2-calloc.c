#include "main.h"

/**
 * _memset - allocates memory for an array, using malloc
 * @str: array length
 * @b: size of each element
 * @n: constant byte
 * Return: pointer
 */

char *_memset(char *str, char b, unsigned int n)
{
	char *ptr = str;

	while (n--)
	{
	       *str++ = b;
	}
	return (ptr);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size = 0)
	{
		return (NULL);
	}
	m = malloc(nmemb * size);
	if (m == NULL)
	{
		return (NULL);
	}

	_memset(m, 0, nmemb * size);

	return (m);
}
