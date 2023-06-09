#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Returns the index of a key in a hash table.
 * @key: The key to find the index for.
 * @size: The size of the hash table array.
 *
 * Return: The index at which the key/value pair should be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value = hash_djb2(key);
unsigned long int index = hash_value % size;
return (index);
}
