#include "main.h"
/**
 * _strlen - computes string length
 * @str: string to be computed
 * Return: returns string length
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * create_file -creates file
 * @filename: file to be created
 * @text_content: content of the file
 * Return: Returns: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, Wfd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		if (close(fd) < 0)
			return (-1);
		return (1);
	}
	Wfd = write(fd, text_content, _strlen(text_content));

	if (Wfd == -1 || close(fd) < 0)
		return (-1);

	return (1);
}
