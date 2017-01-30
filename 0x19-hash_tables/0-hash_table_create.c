#include "hash_tables.h"
/**
 * hash_table_create - create the hash table
 * @size: The size of the hash table to be created
 *
 * Return: the pointer to the struct of the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL || size <= 0)
		return (NULL);
	hash->array = malloc(size * sizeof(hash_node_t *));
	if (hash->array == NULL)
		return (NULL);
	for (i = 0; i < size; i ++)
		hash->array[i] = NULL;
	hash->size = size;
	return (hash);
}
