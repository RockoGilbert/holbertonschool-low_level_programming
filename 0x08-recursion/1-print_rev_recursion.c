#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *@s:string
 *return:void
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
	_print_rev_recursive(s + 1);
		_putchar(*s);

}
}
















}
