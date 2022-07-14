#include "lists.h"
/**
 * print_list - prints linked list elements
 * @h: head of linked list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *point;

	point = h;
	while (point != NULL)
	{
		if (point->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", point->len, point->str);
		}

		point = point->next;
		i++;
	}
	return (i);
}
