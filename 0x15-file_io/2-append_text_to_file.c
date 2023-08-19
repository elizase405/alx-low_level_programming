#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: pointer to filename.
 * @text_content: text to add to file.
 *
 * Return: If function fails or user lacks write permission
 * or filename is NULL/doesn't exist, return -1. else 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, fdw, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fdo = open(filename, O_WRONLY | O_APPEND);
	fdw = write(fdo, text_content, len);

	if (fdo == -1 || fdw == -1)
		return (-1);

	close(fdo);

	return (1);
}
