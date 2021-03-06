#include "holberton.h"

/**
 * _pow_recursion - returns a value
 * @x: the value to multiply
 * @y: the value to multiply the value
 * Return: the value multiplied y times
 */

int _pow_recursion(int x, int y);
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y != 0)

		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}
