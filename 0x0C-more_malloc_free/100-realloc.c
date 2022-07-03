#include <stdlib.h>
#include "main.h"
/**
 * _memcpy - copies data from src to dest
 * @dest: - the memory to be copied on
 * @src: source
 * @n: size of old memory
 * Return: void
 */

void _memcpy(void *dest, void *src, size_t n)
{
	size_t i;
	char *cdest = (char *)dest;
	char *csrc = (char *)src;

	for (i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
}

/**
 * _realloc - reallocates memory
 * @ptr: the memory to be resized
 * @old_size: old size of ptr
 * @new_size: new size
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);

		return (NULL);
	}
	else if (!ptr)
	{
		return (malloc(new_size));
	}

	else if (new_size <= old_size)
	{
		return (ptr);
	}
	else
	{
		newptr = malloc(new_size);
		if (newptr)
		{
			_memcpy(newptr, ptr, old_size);
			free(ptr);
		}
		return (newptr);
	}
	return (0);
}