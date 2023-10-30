#include "main.h"

/**
 * read_textfile - a function that reads a text file
 *
 * @filename: file name
 * @letters: number of letters to read & print
 *
 * Return: file can not open return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_read_write, fd;
	char *buff;

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	num_read_write = read(fd, &buff[0], letters);
	num_read_write = write(STDOUT_FILENO, &buff[0], num_read_write);

	close(fd);
	free(buff);

	return (num_read_write);
}
