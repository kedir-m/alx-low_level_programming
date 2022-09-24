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

	if (hash_table == NULL || size == 0)
		return NULL;
	hash_table->size = size;
	hash_table->array = calloc(size * sizeof(hash_node_t));

	if (hash_table_t->array == NULL)
		return NULL;

	return (hash_table)
}
