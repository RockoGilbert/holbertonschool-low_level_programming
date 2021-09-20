#include "sort.h"

/**
 * insertion_sort_list - sorts function
 * @list: list to be sorted
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *sort;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	sort = (*list)->next;

	while (sort != NULL)
	{
		while (sort->prev != NULL && sort->n < sort->prev->n)
		{
			sort->prev->next = sort->next;
			if (sort->next != NULL)
				sort->next->prev = sort->prev;
			sort->next = sort->prev;
			sort->prev = sort->prev->prev;
			sort->next->prev = sort;
			if (sort->prev == NULL)
				*list = sort;
			else
				sort->prev->next = sort;
			print_list(*list);
		}
		sort = sort->next;
	}
}






