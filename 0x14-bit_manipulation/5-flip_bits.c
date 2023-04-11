#include "main.h"

/**
 * flip_bits - counts the number of bits to flip from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int total = 0;
	unsigned long int subject;
	unsigned long int unique = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		subject = unique >> i;

		if (subject & 1)
			total++;
	}

	return (total);
}
