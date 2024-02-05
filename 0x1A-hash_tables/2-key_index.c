#include "hash_tables.h"

/**
 * key_index - generates index of key
 * @key: key
 * @size: the size of the array of hash table
 *
 * Return: pointer to the created hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
