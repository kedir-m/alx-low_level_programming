#include "lists.h"
/**
 * pop_listint - deletes the head node of listint_t list
 * @head: pointer to head node of listint_t list
 * Return: returns deleted nodes element
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);

	while (*head != NULL)
	{
		tmp = *head;
		n = (*head)->n;
		*head = (*head)->next;
		free(tmp);
		break;
	}
	return (n);
}
