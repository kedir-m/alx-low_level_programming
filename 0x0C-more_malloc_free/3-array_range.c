#include <stdlib.h>
#include "main.h"

/**
 * array_range - prints min - max number
 * @min: minimum number
 * @max: max number
 * Return: returns int
 */

int *array_range(int min, int max)
{
	int *ptr, i;
	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min) + 1);
	if (ptr == NULL)
	{
		
	}
	for (i = 0; min <= max; min++, i++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
