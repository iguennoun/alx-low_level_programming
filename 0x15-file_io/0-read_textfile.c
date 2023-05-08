#include "main.h"

/**
 * read_textfile - Reads a text file and print it to POSIX stdout
 * @filename: The name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: The number of letters printed or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;
	ssize_t nbr_char_readed, nbr_char_printed;
	char *content;

	if (!filename)
		return (0);

	fildes = open(filename, O_RDONLY);
	/*
	 * fildes is a file descriptor, a small,
	 *	nonnegative integer that is an index to an entry
	 *	in the process's table of open file descriptors.
	 */
	if (fildes == -1)
		return (0);

	content = malloc(sizeof(char) * (letters));
	if (!content)
		return (0);

	nbr_char_readed = read(fildes, content, letters);
	nbr_char_printed = write(STDOUT_FILENO, content, nbr_char_readed);

	close(fildes);
	free(content);

	if (nbr_char_readed == -1 || nbr_char_printed == -1)
		return (0);

	return (nbr_char_printed);
}
