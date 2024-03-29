#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file to append
 * @text_content: string to append at the end of the file.
 *
 * Return: On failure or filename is NULL, -1.
 *         If the file is non-existence
 *         Or the user has no write permissions, -1
 *         Otherwise, 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);
	return (1);
}
