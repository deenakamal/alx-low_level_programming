#include "main.h"
#include <elf.h>
/**
 * main - program
 *
 * @argc: argument number
 * @argv: argument value
 *
 * Return: 1 on succeaa otherwise 0
 */
int main(int argc, char **argv)
{
	int fd;
	ssize_t num_butes;

	fd = open (argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (argc != 2)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	header = malloc(sizeof(Elf46_Ehdr));
	if (!header)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	return (0);
}
