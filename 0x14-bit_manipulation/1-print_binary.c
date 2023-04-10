#include "main.h"

/**
 * print_binary - prints the binary rep of a decimal number
 * @n: number to print as a binary number
 */
void print_binary(unsigned long int n)
{
	int i;
	int rep = 0;
	unsigned long int convert;

	for (i = 63; i >= 0; i--)
	{
		convert = n >> i;

		if (convert & 1)
		{
			_putchar('1');
			rep++;
		}
		else if (rep)
			_putchar('0');
	}
	if (!rep)
		_putchar('0');
}
