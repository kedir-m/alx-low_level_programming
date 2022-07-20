#include "lists.h"

/**
 * listint_len - computes node length
 * @h: head pointer
 * Return: returns number of nodes
 */

int listint_len2(const listint_t *h)
{
	const listint_t *head;
	int count_node = 0;

	head = h;

	while (head != NULL)
	{
		count_node++;

		head = head->next;
	}

	return (count_node);
}
/**
 * insert_nodeint_at_index - inserts node at index
 * @head: pointer to head node
 * @idx: index for new node
 * @n: new node element
 * Return: returns pointer new listint_t list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *point, *new_node;
	int i = 0;
	int length;
	int idx2 = (int)idx;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (0);
	point = *head;
	length = listint_len2(point);

	if (length == 0 ||idx2 == length)
		return (add_nodeint_end(&point, n));

	if (idx2 == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	if (idx2 < 0 && idx2 > length)
		return (NULL);

	while (point != NULL)
	{
		i++;
		point = point->next;
		if (i == idx2 - 1)
		{
			new_node->next = point->next;
			point->next = new_node;
			break;
		}
	}

	new_node->n = n;
	return (*head);
}
