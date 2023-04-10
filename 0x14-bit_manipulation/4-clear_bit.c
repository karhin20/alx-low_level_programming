#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to be changed
 * @index: index of the bit to set to 0
 *
 * Return: 1 for success, otherwise 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1ul << index);
	return (1);
}
