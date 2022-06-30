#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - allocate b bytes
 * @b: size
 * Return: returns nothing
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(sizeof(unsigned int) * b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
