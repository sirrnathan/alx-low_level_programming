#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: filename to be created
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int frnt;
	int new_letter;
	int nx;

	if (!filename)
		return (-1);

	frnt = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (frnt == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (new_letters = 0; text_content[new_letters]; new_letters++)
		;

	nx = write(frnt, text_content, new_letters);

	if (nx == -1)
		return (-1);

	close(frnt);

	return (1);
}
