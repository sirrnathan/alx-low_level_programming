#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int Num;

	for (Num = 0; Num <= 9; Num++)
	{
		putchar((Num % 10) + '0');
		if (Num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
