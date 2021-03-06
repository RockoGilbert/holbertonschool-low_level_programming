#include "lists.h"

/**
 * print_list - prints all elements of a singly linked list
 * @h: pointer to start of list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;
	int i;
	const list_t *c = h;

	for (i = 0; c; i++)
	{
		if (c->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", c->len, c->str);
	c = c->next;
	len++;
	}
return (len);
}
