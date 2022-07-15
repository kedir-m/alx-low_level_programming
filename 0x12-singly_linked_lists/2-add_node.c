#include "lists.h"

/**
 * _str_len - computes string length
 * @str: string
 * Return: returns string length
 */
unsigned int _str_len(const char *str)
{
	unsigned int ln;

	for (ln = 0; str[ln]; ln++)
		;

	return (ln);
}

/**
 * add_node - adds node in the begining
 * @head: head node
 * @str: string
 * Return: returns pointer to new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *point;

	point = malloc(sizeof(list_t));
	if (point == NULL)
		return (NULL);
	point->str = strdup(str);
	point->len = _str_len(str);
	point->next = *head;
	*head = point;

	return (*head);
}
