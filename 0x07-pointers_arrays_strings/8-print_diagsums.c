#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer
 * @size: size of the matrix
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int add1, add2, x;

	add1 = 0;
	add2 = 0;

	for (x = 0; x < size; x++)
	{
		add1 = add1 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		add2 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", add1, add2);
}

