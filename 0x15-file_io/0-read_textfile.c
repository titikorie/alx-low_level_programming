#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = 0, w = 0;
	char *buf;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	w = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, w);
	if (w < 0)
		return (0);

	close(fd);
	free(buf);
	return (w);
}
