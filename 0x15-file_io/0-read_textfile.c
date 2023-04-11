#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a textfile and prints to STDOUT
 * @filename: the text file being read
 * @letters: the number of letter to be read and print
 * Return: n actual number of bytes read and printed
 *         0 if file name is NULL or if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fentd;
	ssize_t fd;
	ssize_t n;
	ssize_t b;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fentd = malloc(sizeof(char) * letters);
	b = read(fd, fentd, letters);
	n = write(STDOUT_FILENO, fentd, b);

	free(fentd);
	close(fd);
	return (n);
}
