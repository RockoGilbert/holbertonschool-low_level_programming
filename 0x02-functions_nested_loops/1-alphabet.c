#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 * Description: Prints the alphabet with _putchar
 * Return: 0
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
}
