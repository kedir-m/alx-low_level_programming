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
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to head pointer
 * @index: index of node to be deleted
 * Return: returns 1 if success or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *point, *tmp, **h;
	unsigned int i = 0;
	size_t length;

	h = head;
	if (h == NULL)
		return (-1);
	point = *head;
	length = listint_len(point);

	if (length == 0)
		return (-1);

	while (point != NULL)
	{
		i++;
		point = point->next;
		if (i  == length - 1 && length == index)
			tmp = point->next;
		else if (i == index - 1)
			tmp = point;

		if (index == 0 && i == 1)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
			break;
		}
		else if (index == length)
		{
			free(tmp);
		}
		else if (i == (index))
		{
			tmp->next = point->next;
			free(point);
			break;
		}
	}

	return (1);
}
