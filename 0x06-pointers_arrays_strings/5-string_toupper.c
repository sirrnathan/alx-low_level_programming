#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *a)
{
	int count = 0;

	while (*(a + count) != '\0')
	{
		if ((*(a + count) >= 97) && (*(a + count) <= 122))
			*(a + count) = *(a + count) - 32;
		count++;
	}

	return (a);
}

