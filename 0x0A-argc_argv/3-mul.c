#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - returns product of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Success) and 1 (Error)
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);

		printf("%d\n", a * b);
	return (0);
	}
	printf("Error\n");
	return (1);
}
