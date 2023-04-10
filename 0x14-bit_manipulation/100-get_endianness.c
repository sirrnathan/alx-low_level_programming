#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *ALX advanced task 100
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int nX = 1;
	char *x;

	x = (char *) &nX;

	return ((int)*x);
}
