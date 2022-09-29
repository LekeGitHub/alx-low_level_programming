#include "main.h"
/**
 * _print_rev_recursion - function that prints  string in reverse
 *
 * @s: strings
 * 
 * Return: nothing.
 */

void _print_rev_recursion(char *);
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

