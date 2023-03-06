#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: input pointer
 * Return: no return
 */
void print_chessboard(char (*a)[8])
{
	int index;
	int j;

	for (index = 0; index < 8; index++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[index][j]);
		_putchar('\n');
	}
}

