#include "main.h"

/**
 * rev_string - sometext
 * @s: sometext
 * Return: some too
 */

void rev_string(char *s)
{
	int n, j, half;
	char a;

	n = 0;
	j = 0;
	while (s[n])
	{
		n++;
	}

	half = n / 2;

	while (half--)
	{
		a = s[n - j - 1];
		s[n - j - 1] = s[j];
		s[j] = a;
		j++;
	}
}
