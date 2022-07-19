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

/**
 * get_nodeint_at_index - gets node at index
 * @head: pointer to head node
 * @index: index of node
 * Return: returns pointer to node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *point;
	unsigned int i = 0;
	size_t nod_num;

	nod_num = listint_len(head);
	if ( index < 0 || index > nod_num)
		return (NULL);
	point = head;
	while (point != NULL)
	{
		i++;
		point = point->next;
		if (i == index)
			break;
	}
	return (point);
}
