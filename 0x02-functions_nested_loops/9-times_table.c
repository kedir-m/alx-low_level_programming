#include <stdio.h>
#include "main.h"
/**
 * times_table - last digit
 *
 *
 *
 */
void times_table(void)
{
	int i, j;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		printf("%d", i * j);
		if (j < 9)
		{
			putchar(',');
		}
		if ((i <= 9 && j < 1) || (i <= 1 && j < 9) || (i == 2 && j < 4)
		    || (i == 3 && j < 3) || (i == 4 && j < 2))
		{
			putchar(' ');
			putchar(' ');
		}
		else if (j < 9)
		{
			putchar(' ');
		}
	}
	putchar('\n');
}
}
