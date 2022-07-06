#include "function_pointers.h"

/**
 * array_iterator - iterates action through array
 * @array: numbers to be printed
 * @size: size
 * @action: prints array
 * Return: returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
