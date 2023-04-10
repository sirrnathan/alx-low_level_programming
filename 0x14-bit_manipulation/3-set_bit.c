#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1
 * at a given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 *
 * Return: 1 if success, -1 if unsuccessful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int nil;

	if (index > 63)
		return (-1);

	nil = 1 << index;
	*n = (*n | nil);

	return (1);
}
