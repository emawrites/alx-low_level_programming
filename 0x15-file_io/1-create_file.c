#include "main.h"

/**
 * create_file - creates a new file
 * @filename: name of file to be created
 * @text_content: a string to write to.
 *
 * Return: 1 or 0 on sucess or failure resp.
 */

int create_file(const char *filename, char *text_content)
{
	int file, fwrite, i;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		fwrite = write(file, text_content, i);
		if (fwrite == -1)
			return (-1);
	}
	close(file);

		return (1);
}
