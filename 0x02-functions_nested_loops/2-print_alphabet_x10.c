#include "min.h"

/**
 * print_alphabet_x10 - fnction
 *
 */
void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; ++line)
	{

		for (ch = 'a'; line <= 'z'; ++ch)
			_putchar(ch)
		_putchar('\n');
	}
}
