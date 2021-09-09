#include "lists.h"

/*
 * sum_dlistint - returns the sum of all data
 * @head: the head
 *
 * Return: the sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	 int tote = 0;
	 dlistint_t *sum = head;
	 
	 if (sum == NULL)
	{
	       	return(0);
	}
	 while (sum != NULL)
	{
		tote += sum->n;
		sum = sum->next;
	}
	return (tote);

}
