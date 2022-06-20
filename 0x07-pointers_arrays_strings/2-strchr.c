#include "main.h"

/**
 * _strchr - finds char in string
 * @s: string to be checked
 * @c: char to be found
 * Return: returns s when success or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
