#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int index, j, add = 0;

	for (index = 1; index < argc; index++)
	{
		for (j = 0; argv[index][j] != '\0'; j++)
		{
			if (!isdigit(argv[index][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[index]);
	}
	printf("%d\n", add);
	return (0);
}
