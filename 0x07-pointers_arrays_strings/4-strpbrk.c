#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: first string
 * @accept: second string
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int index, j;

	for (index = 0; *(s + index) != '\0'; index++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + index) == *(accept + j))
				return (s + index);
		}
	}
	return ('\0');
}

