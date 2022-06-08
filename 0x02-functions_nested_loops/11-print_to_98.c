#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - adds to no.
 * @n: pra ajh
 *
 *
 *
 */
void print_to_98(int n)
{
	int i, j;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
			{
				continue;
			}
			printf(", ");
		}
	}
	else if (n < 98)
	{
		for (j = n; j <= 98; j++)
		{
			printf("%d", j);
			if (j == 98)
			{
				continue;
			}
			printf(", ");
		}
	}
}
