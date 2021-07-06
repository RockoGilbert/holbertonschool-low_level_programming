#include "holberton.h"
/**
 * swap_int - swap value of two integers
 * @a: pointer to integer to swap
 * @b: pointer other integer to swap
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
