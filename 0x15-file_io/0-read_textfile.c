#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: name of file to be read
 * @letters: no of total characyer to be printed to stdout
 *
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, eof, write_using_posix;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	eof = read(fd, buf, letters);
	write_using_posix = write(STDOUT_FILENO, buf, eof);

	if (fd < 0 || eof < 0 || write_using_posix < 0 || write_using_posix != eof)
	{
		free(buf);
		return (0);
	}

	free(buf);
	if (close(fd) < 0)
		return (0);

	return (write_using_posix);
}
