#include "holberton.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be checked
 * Return: the last num of a number
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	_putchar(last + '0');
	return (last);
}
