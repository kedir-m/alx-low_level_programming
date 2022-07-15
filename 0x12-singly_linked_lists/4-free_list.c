#include "lists.h"
/**
 * free_list - frees nodes
 * @head: head node address
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *point;

	point = head;

	while (point != NULL)
	{
		if (point->next == NULL)
		{
			free(point->next);
			free(point->str);
			point = NULL;
		}
		else
		{
			free(point->next);
			free(point->str);
			point = point->next;
		}
	}
	free(head);
}
