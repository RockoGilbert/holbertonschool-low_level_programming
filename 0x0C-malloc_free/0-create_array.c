#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - create an array of a char
 * @size: size of the array
 * @c: the character to use in the array
 * Return: pointer to array or NULL if size = 0
 */
char *create_array(unsigned int size, char c);

{
	unsigned int i;
	char *arr = malloc(sizeof(char) * size);

	if (size != 0 && arr != NULL)
	{
		for (i < 0; i < size; ++i)
		{
			arr[i] = chr;
		}
		return (arr);
	}
	else
		return (NULL);

}
