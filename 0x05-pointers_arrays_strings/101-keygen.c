#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int r = 0, d = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (d < 2772)
	{
		r = rand() % 128;
		if ((d + r) > 2772)
			break;
		d = d + r;
		printf("%d", r);
	}
	printf("%d\n", (2772 - d));
	return (0);
}
