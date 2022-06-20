#include "main.h"

/**
 * _strstr - finds substring
 * @haystack: sometext
 * @needle: som text
 * Return: char type
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = i; haystack[i] && needle[j - i]; j++)
		{
			if (haystack[j] != needle[j - i])
			{
				break;
			}
		}
		if (needle[j - i] == '\0')
		{
			return (haystack + i);
		}
	}

	return ('\0');
}
