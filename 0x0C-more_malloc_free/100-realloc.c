#include "main.h"
#include <stdlib.h>

/**
 * _memcpy - copy memory data from src to dest
 * @dest: memory destination
 * @src: memory source
 * @n: size of new memory
 */

void _memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int i;

	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];
}

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: array length
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: pointer to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;

	if (new_size == 0 && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	newPtr = malloc(new_size);
	if (!newPtr)
		return (NULL);

	if (new_size < old_size)
	{
		_memcpy(newPtr, ptr, new_size);
	}
	else if (new_size > old_size)
	{
		_memcpy(newPtr, ptr, old_size);
	}
	free(ptr);
	return (newPtr);
}
