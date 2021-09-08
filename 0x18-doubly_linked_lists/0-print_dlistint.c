#include "lists.h"

/**
 * print_dlistint - prints all elements of list
 * @h: head of list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *nhead = h;

	while (!nhead)
	{
		printf("%d\n", nhead->n);
		count++;
		nhead = nhead->next;
	}
	return (count);
}
