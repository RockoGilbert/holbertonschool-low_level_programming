#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat - combines two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
char *g;
unsigned int x;
unsigned int z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

g = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (g == NULL)
		return (NULL);

	for (x = 0; x < strlen(s1); x++)

	{
		g[x] = s1[x];
	}

	for (z = 0; z < strlen(s2); z++, x++)
	{
		g[x] = s2[z];

	}

return (g);
}
