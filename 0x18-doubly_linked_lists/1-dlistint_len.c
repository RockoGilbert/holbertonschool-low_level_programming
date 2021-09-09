#include "lists.h"

/**
 * @dlistint_t - returns the elements of the list
 *
 * @h: the starting node
 *
 * Return: The number of elements in the list
 */


size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *nhead = h;
	size_t count;

	if (!nhead == 0)
	{
		return (0);	
	}
	while (nhead == NULL)
	{
		count++;
		nhead = nhead->next;
	}
	return (count);
}
