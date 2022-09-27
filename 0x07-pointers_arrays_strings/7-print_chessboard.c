#include "main.h"
/**
 * print_chessboard - printing chessboard displaying a 2D array
 *
 * @a: 2D Array
 *
 * Return: return nothing
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int column;

	while (row < 64)
	{
		if (row % 8 == 0 && row != 0)
		{
			column = row;
			_putchar('\n');
		}
		_putchar(a[row / 8][row - column]);
		row++;
	}
	_putchar('\n')
}
