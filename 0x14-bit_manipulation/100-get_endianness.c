#include "main.h"

/**
 * get_endianness - checks a machine for little or big endianness
 * Return: 0 for big or 1 for little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *end = (char *) &a;

	return (*end);
}
