#include "main.h"

/**
 * create_file - Creates a file
 * @filename: The name of the file to create
 * @text_content: The content to write in the file
 *
 * Return: 1 if success -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fildes, text_content_len = 0, nbr_char_written;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	else
	{
		while (text_content[text_content_len])
			text_content_len++;
	}

	fildes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fildes == -1)
		return (-1);

	nbr_char_written = write(fildes, text_content, text_content_len);
	if (nbr_char_written == -1)
		return (-1);

	close(fildes);

	return (1);
}
