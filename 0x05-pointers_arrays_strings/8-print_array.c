#include "main.h"
#include <stdio.h>
/**
 * print_array - print second half of a string
 * @n:  array string type
 * @a: pointer
 * Description: If odd number of chars
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
