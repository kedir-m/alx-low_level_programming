#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of listint_t list
 * @head: pointer to head pointer
 * @n: nee data of new node
 * Return: returns pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *h;

	h = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (h == NULL)
	{
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
		return (*head);
	}
	else
	{
		while (h != NULL)
		{
			if (h->next == NULL)
			{
				new_node->next = h->next;
				h->next = new_node;
				h = NULL;
			}
			else
			{
				h = h->next;
			}
		}
	}

	new_node->n = n;

	return (*head);
}
