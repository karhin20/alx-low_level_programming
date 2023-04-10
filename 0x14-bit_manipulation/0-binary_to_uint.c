#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: converted number, otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unsint = 0;
	int a;

	if (b == NULL)
		return (0);

	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		unsint = 2 * unsint + (b[a] - '0');
	}

	return (unsint);
}

