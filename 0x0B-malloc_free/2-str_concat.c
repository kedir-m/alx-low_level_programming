#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatnates string
 * @s1: strimg 1
 * @s2: string 2
 * Return: rrturns pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *new_ptr;

	int i, j, k, t, l = 0;
	for (i = 0; s1[i]; i++)
		;

	for (j = 0; s2[j]; j++)
		;

	t = i + j;
	new_ptr = malloc(t * sizeof(char) + 1);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < t; k++)
	{
		new_ptr[k] = s1[k];
		if (k >= i)
		{
			new_ptr[k] = s2[l];
			l++;
		}
	}
	return (new_ptr);
}
