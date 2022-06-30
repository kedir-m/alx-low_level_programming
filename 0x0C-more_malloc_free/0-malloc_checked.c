#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - allocate b bytes
 * @b: size
 * Return: returns nothing
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);
	if (ptr == 0)
	{
		exit(98);
	}

	return (ptr);
}
