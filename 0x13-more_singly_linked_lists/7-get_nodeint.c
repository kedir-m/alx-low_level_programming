#include "lists.h"
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
