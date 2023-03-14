#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int index, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] != '\0'; index++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	strout = malloc(sizeof(char) * (index + j + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}

	for (k = 0; k < index; k++)
		strout[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		strout[k] = s2[j];

	return (strout);
}

