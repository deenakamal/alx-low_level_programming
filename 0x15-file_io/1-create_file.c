#include "main.h"

/**
 * create_file - creat a function this function creat file
 *
 * @filename: file name
 * @text_content: text to write into file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0, num_bytes;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content[len] != '\0')
		len++;

	num_bytes = write(fd, text_content, len);

	if (num_bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
