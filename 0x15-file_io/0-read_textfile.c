#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints the letters
 * @filename: filename.
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int frnt;
	ssize_t nxt, nyr;
	char *y;

	if (!filename)
		return (0);

	frnt = open(filename, O_RDONLY);

	if (frnt == -1)
		return (0);

	y = malloc(sizeof(char) * (letters));
	if (!y)
		return (0);

	nxt = read(frnt, y, letters);
	nyr = write(STDOUT_FILENO, y, nxt);

	close(frnt);

	free(y);

	return (nyr);
}
