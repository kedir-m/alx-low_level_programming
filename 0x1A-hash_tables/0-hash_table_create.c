#include "hash_tables.h"
/**
 * hash_table_create -creates hash table.
 * @size: size of hash table.
 * Return: returns pointer to newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return NULL;
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));

	if (hash_table_t == NULL)
		return NULL;

	for (i = 0; i < size; i++)
		hash_table[i] = NULL;
	return (hash_table)
}
