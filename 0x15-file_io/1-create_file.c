#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: terminated string to write to the file
 *
 * Return: 1 if it success. -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int frnt, aphabet, yx;

	if (!filename)
		return (-1);

	frnt = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (frnt == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (alphabet = 0; text_content[alphabet]; alphabet++)
		;

	yx = write(frnt, text_content, alphabet);

	if (yx == -1)
		return (-1);

	close(frnt);

	return (1);
}
