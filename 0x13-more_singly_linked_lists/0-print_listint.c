#include "lists.h"

/**
 * print_listint - prints linked list element
 * @h: head pointer
 * Return: returns number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *head;
	size_t count_node = 0;

	head = h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		count_node++;

		head = head->next;
	}

	return (count_node);
}
