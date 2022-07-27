#include "main.h"
/**
 * append_text_to_file - appends text at the end of the file
 * @filename: file to be appended
 * @text_content: content to append
 * Return: Returns: 1 on success; -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, Wfd, i;

	if  (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i]; i++)
		;

	Wfd = write(fd, text_content, i);

	if ( Wfd == -1 || close(fd) == -1)
		return (-1);
	return (1);
}
