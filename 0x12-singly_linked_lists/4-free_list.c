#include "lists.h"
/**
 * free_list - frees nodes
 * @head: head node address
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *point;

	while (head != NULL)
	{
		point = head;
		head = head->next;
		free(point->str);
		free(point);
	}
}
