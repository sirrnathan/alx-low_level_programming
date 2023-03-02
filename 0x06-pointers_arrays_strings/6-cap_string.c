#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @a: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *a)
{
	int count = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(a + count) >= 97 && *(a + count) <= 122)
		*(a + count) = *(a + count) - 32;
	count++;
	while (*(a + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(a + count) == sep_words[i])
			{
				if ((*(a + (count + 1)) >= 97) && (*(a + (count + 1)) <= 122))
					*(a + (count + 1)) = *(a + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (a);
}
