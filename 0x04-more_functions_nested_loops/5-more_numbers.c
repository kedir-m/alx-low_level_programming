#include <stdio.h>
#include "main.h"
/**
 * more_numbers - checks for upper case
 *
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar((j % 10) + '0');
			if (j >= 10 && j < 14)
			{
				_putchar((j / 10) + '0');
			}
		}
		_putchar('\n');
	}
}
