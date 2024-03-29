#include "main.h"

/**
 * create_file - creates file.
 * @filename: Name of the file to create.
 * @text_content: string to write to the file.
 *
 * Return: function fails, -1
 *         Otherwise 1
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int w;
	int count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(f, text_content, count);

	if (f == -1 || w == -1)
		return (-1);

	close(f);

	return (1);
}
