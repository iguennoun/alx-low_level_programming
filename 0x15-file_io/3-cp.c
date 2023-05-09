#include "main.h"
/**
 * main - Program to copy av[1] to av[2]
 * @ac: Number of argument passed to the program
 * @av: Array of arguments (the files to process)
 *
 * Return: Always 0
 *	97  : Nbr args not correct
 *	98  : File to copy not existing or can't be read
 *	99  : Destination file not created or can't be written to
 *	100 : Error clossing file descriptors
 */
int main(int ac, char **av)
{
	int fd_ffrom, fd_fdest, readed, written;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_ffrom = open(av[1], O_RDONLY);
	if (fd_ffrom == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_fdest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_fdest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((readed = read(fd_ffrom, buffer, 1024)) > 0)
	{
		written = write(fd_fdest, buffer, readed);
		if (written == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (readed == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	if (close(fd_ffrom) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_ffrom), exit(100);
	if (close(fd_fdest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_fdest), exit(100);

	return (0);
}
