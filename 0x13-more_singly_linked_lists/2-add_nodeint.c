#include "lists.h"

/**
 * add_nodeint - adds node in the biginning
 * @head: pointer to head pointer
 * @n: new data
 * Return: returns pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t **h;

	h = head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = *head;
	new_node->n = n;
	*h = new_node;
	return (*h);
}
