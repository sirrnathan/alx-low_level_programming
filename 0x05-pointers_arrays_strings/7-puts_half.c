#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of characters, print (length - 1) / 2
 */

void puts_half(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
		;

	s++;
	for (s /= 2; str[s] != '\0'; s++)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
