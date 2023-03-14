#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *ac;
	unsigned int index;

	if (size == 0)
		return (NULL);

	ac = malloc(sizeof(c) * size);

	if (ac == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		ac[index] = ac;

	return (ac);
}

