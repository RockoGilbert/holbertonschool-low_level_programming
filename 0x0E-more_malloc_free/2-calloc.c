#include "holberton.h"
#include <stdlib.h>


/**
 * _calloc - allocate memory of x elements
 * @nmemb: int
 * @size: int
 * Return: pointer to Calloc memory or NULL if x = o
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	x = malloc(size * nmemb);
	if (x == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); ++i)
		x[i] = 0;

	return (x);


}
