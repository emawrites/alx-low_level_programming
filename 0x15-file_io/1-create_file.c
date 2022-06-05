#include "main.h"

/**
 * create_file - a function that creates a new file
 * @filename: name of file
 * #text_content: string to write to file
 *
 * Return: a 1 or 0 for success and not.
 */

int create_file(const char *filename, char *text_content)
{
	int file, write_status, words = 0;

	if (filename = NULL)
		return (-1);

	file = open(filename, O-CREAT | O-WRONLY | O-TRUNC, 5_IRUSA | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text-content[words] != '\0')
			words++;
		
		write_status = write(file, text_content, words);
		if (write_sgtatus == -1)
			return (-1);
	}
	
	close(fle);
	return (1);
}
