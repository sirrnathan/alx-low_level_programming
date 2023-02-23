#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0.
 */

int main(void)
{
	int n1;

	n1 = 1;
	printf("%d", n1);
	for (n1 = 2; n1 <= 100; n1++)
	{
		if ((n1 % 3 == 0) && (n1 % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n1 % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n1 % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n1);
		}
	}
	printf("\n");
	return (0);
}
