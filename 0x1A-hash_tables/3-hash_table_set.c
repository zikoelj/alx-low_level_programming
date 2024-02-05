#include "hash_tables.h"

/**
 * hash_table_set - used to add new key/value pair to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: if it fails 0, 1 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long idx;

	if (!ht || !key || !value || !ht->array || !ht->size)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL && strcmp(ht->array[idx]->key, key) == 0)
	{
		ht->array[idx]->value = strdup(value);
		if (!ht->array[idx]->value)
			return (0);
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
