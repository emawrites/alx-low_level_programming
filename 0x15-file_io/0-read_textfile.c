#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to stdout.
 * @filename: file with text
 * @letters: number of letters to read and print.
 *
 * Return: no of letters it could print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t read_check, wcount;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	/*obtain buffer no from letters given*/
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	read_check = read(file, buffer, letters);
	if (read_check == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buffer, read_check);
	if (wcount == -1 || read_check != wcount)
		return (0);

			free(buffer);

	close(file);

	return (wcount);
}
