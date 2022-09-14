#include "main.h"
/**
 * Main - Entry Point
 *
 * print_alphabet - function that prints alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
