#include "main.h"

/**
 * set_bit - sets a bit to 1 at a given index
 * @n: pointer to the number to the given number
 * @index: index of the bit to set to 1 starting from 0
 *
 * Return: 1 on success, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1ul << index);
	return (1);
}
