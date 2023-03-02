#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int index;
	int t;

	for (index = 0; index < n--; index++)
	{
		t = a[index];
		a[index] = a[n];
		a[n] = t;
	}
}

