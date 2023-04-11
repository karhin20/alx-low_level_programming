#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *buffer(char *file);
void exit_file(int f);

/**
 * buffer - create buffer of 1024
 * @file: name of the file buffer storing chars
 *
 * Return: pointer to the allocated buffer.
 */

char *buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * exit_file - exits descriptors of files
 * @f: file descriptor to be closed.
 */

void exit_file(int f)
{
	int a = close(f);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f %d\n", f);
		exit(100);
	}
}

/**
 * main - Copies contents of a file to another file.
 * @argc: count of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: success (0)
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int frm;
	int to;
	int r;
	int w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	r = read(frm, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(to, buff, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r = read(frm, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buff);
	exit_file(frm);
	exit_file(to);

	return (0);
}
