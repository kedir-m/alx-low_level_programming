#include "hash_tables.h"
/**
 * hash_table_set - adds element to hash table.
 * @key: the key.
 * @value: value asociated with the key.
 * Return: 1 if it succeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size, index;
	hash_node_t *new_node, *node;

 	if (*key == '\0' || *value == '\n' || ht == NULL)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char*)key, size);

	node = ht->array[index];

	if (node == NULL)
	{
		new_node = create_node(key, value);
		if (new_node == NULL)
			return (0);

		ht->array[index] = node;

		return (1);
	}

	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value =strdup(value);
			return (1);
		}
		node = node->next;
	}

	node = ht->array[index];

	new_node = create_node(key, value);

	if (new_node == NULL)
		return (0);

	ht->array[index] = new_node;

	new_node->next = node;


	return (1);
}

/**
 * create_node - creates new node
 * @key: the key of hash table.
 * @value: value for corrosponding key.
 * Return: returns pointer to newly created node if it succeded, NULL otherwise.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	new_node->next = NULL;

	return (new_node);
}
