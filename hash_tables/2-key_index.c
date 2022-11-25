#include "hash_tables.h"

/**
 * key_index - function that returns index of a key
 * @key: key
 * @size: size of array of hash table
 * Return: index of given key
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
