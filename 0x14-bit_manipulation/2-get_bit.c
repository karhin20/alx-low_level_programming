#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index in a number
 * @n: number to check index
 * @index: bit's index
 *
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int index_bit;

	if (index > 63)
		return (-1);

	index_bit = (n >> index) & 1;

	return (index_bit);
}
