#include "hash_tables.h"
/**
  * *hash_table_get - defines function
  * @ht: hash table to lookup
  * @key: key to lookup in the hash table
  * Return: NULL on error, the value of the key on success
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	idx = 0;
	if (!ht || !key)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	if (tmp)
	{
		while (tmp && strncmp(tmp->key, key, strlen(key)) != 0)
		{
			tmp = tmp->next;
		}
		return (tmp != NULL ? tmp->value : NULL);
	}
	return (NULL);
}
