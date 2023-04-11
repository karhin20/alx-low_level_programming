#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file print to the STDOUT.
 * @filename: file being read
 * @letters: number of letters in textfile
 * Return: num-  number of bytes read and printed
 *        0 on failure or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t f;
	ssize_t num;
	ssize_t r;
	char *mem;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	mem = malloc(sizeof(char) * letters);
	r = read(f, mem, letters);
	num = write(STDOUT_FILENO, mem, r);

	free(mem);
	close(f);
	return (num);
}
