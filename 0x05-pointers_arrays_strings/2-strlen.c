#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: string to check
 * Return: the length of a string as an integer
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*(s + counter) != 0)
	{
		counter++;
	}
	return (counter);
}
