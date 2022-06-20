#include "main.h"

/**
 * _strspn - finds char in string
 * @s: string to be checked
 * @accept: char to be found
 * Return: returns s when success or null
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, len;

	len = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}

	return (len);
}
