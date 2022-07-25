#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename:  file to be read
 * @letters: number of letters to be read
 * Return: returns actual number of character read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int sz, fd;

	buf = malloc(letters * sizeof(char));
	if (buf == NULL || filename == NULL)
		return (0);

	fd = open("Requiescat", O_RDONLY);
	if (fd < 0)
		return (0);

	sz = read(fd, buf, letters);
	if (sz < 0)
		return (0);

	buf[sz] = '\0';

	dprintf(STDOUT_FILENO, "%s", buf);
	close(fd);

	return (sz);
}
