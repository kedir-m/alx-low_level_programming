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
 * add_node_end - adds node to end
 * @head: head node address
 * @str: str of new node
 * Return: returns pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *point;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	if ( *head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}
	else
	{
		point = *head;
		while (point != NULL)
		{
			if (point->next == NULL)
			{
				point->next = new_node;
				point = NULL;;
			}
			else
			{
				point = point->next;
			}
		}
	}
	new_node->str = strdup(str);
	new_node->len = _str_len(str);
	new_node->next = point;

	return (*head);
}
