#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file to append text to
 * @text_content: Content to append
 *
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, text_content_len = 0, nbr_char_appended;

	if (!filename)
		return (-1);

	fildes = open(filename, O_WRONLY | O_APPEND);
	if (fildes == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[text_content_len])
			text_content_len++;

		nbr_char_appended = write(fildes, text_content, text_content_len);

		if (nbr_char_appended == -1)
			return (-1);
	}

	close(fildes);

	return (1);
}
