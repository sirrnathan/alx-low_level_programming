#include "main.h"

/**
 * _strlen_recursion - Function returns the length of a string
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (lenght);
}

