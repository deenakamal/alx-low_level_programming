#include "main.h"

/**
 * exit_error: print error and exit
 * @error: error
 * @file: filename
 * @cod_num: code number
 */
void exit_error(char *error, char *file, int code_num)
{
	dprintf(STDERR_FILENO, error, file);
	exit(code_num);
}

/**
 * main - program
 *
 * @argc: arg count
 * @argv: argvalue
 *
 * Return: 1 On success 0 otherwise
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, num_write, num_read = 1;
	char buff[BUFFERSIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		exit_error("Error: Can't read from file %s\n", argv[1], 98);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		exit_error("Error: Can't write to %s\n", argv[2], 99);
	while (num_read)
	{
		num_read = read(fd_from, buff, BUFFERSIZE);
		if (num_read == -1)
			exit_error("Error: Can't read from file %s\n", argv[1], 98);
		num_write = write(fd_to, buff, num_read);

		if (num_write == -1)
			exit_error("Error: Can't write to %s\n", argv[2], 99);
	}

	if (num_read == -1)
		exit_error("Error: Can't write to %s\n", argv[1], 99);
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	}
	if (close(fd_to) ==
		       	-1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
