#include "main.h"

/**
 * _isdigit - function that checks a number between 0 to 9.
 * @c: input number to check.
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

