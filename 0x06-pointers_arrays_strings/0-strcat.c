#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School Students
 * _strcat - concatenates two strings
 * @dest:char
 * @src:char
 * Return:ichar
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (s);

}
