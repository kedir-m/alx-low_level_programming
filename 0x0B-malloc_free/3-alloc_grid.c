#include "main.h"
#include <stdlib.h>
int **alloc_grid(int width, int height)
{
	int i, *ptr, **pptr;

	ptr = malloc(sizeof(int) * width * height);

	pptr = &ptr;
	for (i = 0; i < width * height; i++)
	{
		pptr[i] = 0;
	}

	return (pptr);
}
