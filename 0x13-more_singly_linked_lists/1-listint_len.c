#include "lists.h"

/**
 * listint_len - computes node length
 * @h: head pointer
 * Return: returns number of nodes
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *head;
	size_t count_node = 0;

	head = h;

	while (head != NULL)
	{
		count_node++;

		head = head->next;
	}

	return (count_node);
}
