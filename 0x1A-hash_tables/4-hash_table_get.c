#include "hash_tables.h"
/**
 * hash_table_get - retrieves value asociated with key.
 * @ht: hash table.
 * @key: key of the hash table.
 * Return: returns value associated with key, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned long int index;
	hash_node_t *node;

	if (*key == '\0' || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			value = node->value;
		}
		node = node->next;
	}
	return (value);
}
