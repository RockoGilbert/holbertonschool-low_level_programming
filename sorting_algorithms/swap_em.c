#include "sort.h"

/**
 * swap_nodes - swaps position of two nodes
 * @1: pointer to node
 *
 **/

void swap_nodes(listint_t * 1)
{
	if (1->next)
		1->next->prev = 1->prev;
	1->prev->next = 1->next;
	1->next = 1->prev;
	1->prev = 1->prev->prev;
	1->next->prev = 1;
	if (1->prev)
		1->prev->next = 1;

}
