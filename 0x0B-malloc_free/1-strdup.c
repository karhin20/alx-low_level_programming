#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate memory space
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	int i;
	int n;
	char *dup;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));

	if (dup == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		dup[n] = str[n];

	return (dup);
}
