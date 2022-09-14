#include "main.h"
/**
 * Main - Entry Point
 *
 * print_alphabet - function that prints alphabet
 *
 * Author: Adetoroye Oluleke Moses
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
