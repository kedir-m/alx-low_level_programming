#include <stdlib.h>
/**
 * _memcpy - copies data from src to dest
 * @dest: - the memory to be copied on
 * @src: source
 * @n: size of old memory
 * Return: void
 */

void _memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int i;
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
	if (new_size <= old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		newptr = malloc(new_size);
		return (newptr);
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
