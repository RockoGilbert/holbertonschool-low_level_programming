#include "lists.h"

/**
 * add_dnodeint - adds a new node at the end
 * @n: the element
 * @head: the head
 *
 * Return: the address of the new element
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->prev = NULL;
	new->next = *head;
	new->n = n;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);

}
