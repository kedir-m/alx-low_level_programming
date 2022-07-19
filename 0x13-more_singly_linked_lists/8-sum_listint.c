#include "lists.h"
/**
 * sum_listint - calculates sum of all the data of listint_t list
 * @head: pointer to head node
 * Return: returns total sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *point;

	point = head;
	if (point == NULL)
		return (0);
	while (point != NULL)
	{
		sum += point->n;
		point = point->next;
	}

	return (sum);
}
