#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of list_t
 * @head: pointer
 * @str: pointer
 * Return: the address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *point;

	point = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);
	if (point == NULL)
	{
		free(point);
		return (NULL);
	}


	point->str = strdup(str);
	point->len = strlen(str);
	point->next = *head;

	*head = point;
	return (point);
}

