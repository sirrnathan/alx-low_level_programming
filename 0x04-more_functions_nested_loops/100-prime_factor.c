#include "main.h"
#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int n1, f1;

	n1 = 612852475143;
	for (f1 = 2; f1 <= n1; f1++)
	{
		if (n1 % f1 == 0)
		{
			n1 /= f1;
			f1--;
		}
	}
	printf("%ld\n", f1);
	return (0);
}
