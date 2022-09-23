#include "hash_tables.h"
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @size: size of array of pointers
 *
 * Return: 2d array
 */

hash_table_t *alloc_grid(unsigned long int size)
{
	int i, j;
	hash_node_t **tab;
	tab = malloc(sizeof(*tab) * size);


	for (i = 0; i < size; i++)
	{
		tab[i] = malloc(sizeof(**tab) * size);
		if (tab[i] == 0)
		{
			/*Free everything if malloc fails*/
			while (i--)
				free(tab[i]);
			free(tab);
			return (NULL);
		}
	}

	return (*tab)
}

return (tab);
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
	hash_table->array = alloc_grid(size);

	if (hash_table_t->array == NULL)
		return NULL;

	return (hash_table)
}
