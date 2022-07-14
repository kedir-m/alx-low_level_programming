#include "lists.h"
/**
 * list_len - computes nber of elementd for linked list
 * @h: head of linked list
 * Return: returns number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *point;
	size_t count_elemnt = 0;

	point = h;

	while (point != NULL)
	{
		point = point->next;
		count_elemnt++;
	}

	return (count_elemnt);
}
