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

	index = key_index((const unsigned char *)key, ht->size);
	if (*key == '\0' || ht == NULL)
		return (NULL);

	value = ht->array[index]->value;

	if (value == NULL)
		return (NULL);

	return (value);
}
