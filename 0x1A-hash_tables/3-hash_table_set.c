#include "hash_tables.h"
/**
 * hash_table_set - adds element to hash table.
 * @key: the key.
 * @value: value asociated with the key.
 * Return: 1 if it succeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	//get size of array
	unsigned long int size, index;;

	size = ht->size;
	index = key_index((const unsigned char*)key, size);

	ht->array[index]->value = (char *)value;

	printf("%s\n", ht->array[index]->value);

	return (1);
}
