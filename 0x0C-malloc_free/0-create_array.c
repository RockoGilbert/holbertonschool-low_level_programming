#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create an array of a char
 * @size: unsigned int
 * @c: the character to use in the array
 * Return: char
 */

 char *create_array(unsigned int size, char c);

{
	unsigned int i;
	char *x;

	if (size  == 0)
		return (NULL);

	x = malloc(sizeof(char));
	if (x == NULL)
		{
		return (NULL);
		}
	for (i = 0; i < size; i++)
	{
		x[i] = c;
	
	}
	return (x);
}
