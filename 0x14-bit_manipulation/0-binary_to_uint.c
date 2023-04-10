#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an
 * unsigned int
 * @b: binary number
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ln;
	int nl, base2;

	if (!b)
		return (0);

	ln = 0;

	for (nl = 0; b[nl] != '\0'; nl++)
		;

	for (nl--, base2 = 1; nl >= 0; nl--, base2 *= 2)
	{
		if (b[nl] != '0' && b[nl] != '1')
		{
			return (0);
		}

		if (b[nl] & 1)
		{
			ln += base2;
		}
	}

	return (ln);
}
