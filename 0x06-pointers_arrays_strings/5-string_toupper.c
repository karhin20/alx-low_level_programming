#include "main.h"
/**
 * string_toupper - changes all lowercas to uppercase
 * @c: pointer
 *
 * Return: c
 */

char *string_toupper(char *c)
{
	int n = 0;

	while (c[n] != '\0')
	{
		if (c[n] >= 'a' && c[n] <= 'z')

			c[n] = c[n] - 32;

		n++;
	}
	return (c);
}
