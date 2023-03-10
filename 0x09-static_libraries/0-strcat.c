#include "main.h"

/**
 * *_strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
 */

char *_strcat(char *dest, char *src)
{
	int index;
	int j;

	index = 0;
	j = 0;

	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[j] != '\0')
	{
		dest[index] = src[j];
		j++;
		index++;
	}

	dest[index] = '\0';
	return (dest);
}
