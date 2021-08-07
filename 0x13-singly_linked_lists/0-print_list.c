#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * print_list - prints a list of elements
 * @h: point where list starts printing
 * Return: the number of nodes
 */


size_t print_list(const list_t *h)
{
	list_t *tmp = (list_t *)h;
	int x = 0;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", tmp->len, tmp->str);
																	}
		tmp = tmp->next;
		x++;
	}
	return (x);
}






}
