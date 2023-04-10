#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: filename.
 * @text_content: string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int frnt;
	int new_letter;
	int nx;

	if (!filename)
		return (-1);

	frnt = open(filename, O_WRONLY | O_APPEND);

	if (frnt == -1)
		return (-1);

	if (text_content)
	{
		for (new_letter = 0; text_content[new_letter]; new_letter++)
			;

		nx = write(frnt, text_content, new_letter);

		if (nx == -1)
			return (-1);
	}

	close(frnt);

	return (1);
}
