#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 *
 * Return: actual number of bytes read and printed,
 *         or 0 if function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	t = read(fd, buf, letters);
	if (t == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

