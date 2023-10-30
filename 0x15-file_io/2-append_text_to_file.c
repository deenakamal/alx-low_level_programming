#include "main.h"
/**
 * append_text_to_file - that a function appends text at the end of a file.
 * @filename: file name
 * @text_content: text that append
 *
 * Return: 1 on success -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num_butes;
	int len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);
	while (text_content[len] != '\0')
		len++;

	num_butes = write(fd, text_content, len);

	if (num_butes == -1)
		return (-1);
	return (1);
}
