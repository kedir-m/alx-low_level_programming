#include "lists.h"
/**
 * free_listint - frees listint_t list
 * @head: pointer to head node of listint_t list
 * Return:void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *point;

	point = *head;
	*head = NULL;
	tmp = NULL;
	while (point != NULL)
	{
		tmp = point;
		point = point->next;
		free(tmp);
	}
}
