#include "holberton.h"
/**
 * _memset - fill memory with a constant byte
 * @s:char
 * @r:char
 * @n:unsigned int
 * Return:char
 */
char *_memset(char *s, char r, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = r;

	return (s);

